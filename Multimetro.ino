/*
  Fundación Kinal
  Centro Educativo Técnico Laboral Kinal
  Electrónica
  Grado: Quinto
  Sección: A
  Curso: Taller de Electrónica Digital y Reparación de Computadoras I
  Nombres: Edgar Leonel Ramírez Estrada
  Carnés: 2019410
  Proyecto: Multímetro
*/

//Directivas del preprocesador//
#define sensorV A0
#define muestreo A1

//Variables//
float Sensibilidad = 0.139; //sensibilidad en V/A para nuestro sensor
float offset = 0.100; // Equivale a la amplitud del ruido
int estado = 0;
unsigned int raw_sensor = 0;
float voltaje_sensado = 0;
float den;
float num;
float Vout;
int Vcc = 5;
int R2 = 10000;
int R1; 

void setup() {
  Serial.begin(9600);
  pinMode(sensorV, INPUT);
  Serial.println("MULTIMETRO");
  pinMode(A1, INPUT);
}
void loop() {
  voltaje();
  resistencia();
  Corriente();
  float Ip = get_corriente(); //obtenemos la corriente pico
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  if (Serial.available() > 0) {
    estado = Serial.read();
  }
  if (estado == '1') {
    Serial.println(voltaje_sensado);
  }
  if (estado == '2') {
    Serial.println(R1);
  }
  if (estado == '3') {
    Serial.println(Irms, 3);
  }
}

void voltaje() {
  raw_sensor = analogRead(sensorV);      //Leo el valor medido por el pin analogico
  voltaje_sensado = fmap(raw_sensor, 0, 1023, 0.0, 25.0); //Linealizo el valor leido y lo convierto
}

float fmap(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void resistencia() {
  Vout = analogRead(muestreo);
  Vout = ((5 * Vout) / 1023);
  if (Vout) {
    num = Vcc - Vout;
    den = Vout;
    R1 = (num / den) * R2;
  }
}
void Corriente() {
  float Ip = get_corriente(); //obtenemos la corriente pico
  float Irms = Ip * 0.707; //Intensidad RMS = Ipico/(2^1/2)
  float P = Irms * 220.0; // P=IV watts
}

float get_corriente()
{
  float voltajeSensor;
  float corriente = 0;
  long tiempo = millis();
  float Imax = 0;
  float Imin = 0;
  while (millis() - tiempo < 500) //realizamos mediciones durante 0.5 segundos
  {
    voltajeSensor = analogRead(A2) * (5.0 / 1023.0);//lectura del sensor
    corriente = 0.9 * corriente + 0.1 * ((voltajeSensor - 2.527) / Sensibilidad); //Ecuación  para obtener la corriente
    if (corriente > Imax)Imax = corriente;
    if (corriente < Imin)Imin = corriente;
  }
  return (((Imax - Imin) / 2) - offset);
}
