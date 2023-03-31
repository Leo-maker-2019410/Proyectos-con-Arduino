/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Máquina Expendedora
   Nombre:Edgar Leonel Ramírez Estrada 
   Carnet:2019410
   Fecha:30/02/2023
*/
//Directivas
#define pushfollow 3
#define pushback 4
#define setpinInput(pin)  pinMode(pin,INPUT)
#define setpinOutput(pin) pinMode(pin,INPUT)
#define detectPIN(pin) digitalRead(pin)
//Variables
struct producto {
  char nombre[20];
  float precio_uni;
  int stock;
  char reserva[20];
  float precio_lote;
};

int y=1;
int x=1;
int T=200;
producto Cola={"CocaCola",5.00,10,"Disponible",50.00};
producto Doritos={"Doritos",5.00,8,"Disponible",40.00};
producto Pinguinitos={"pinguinito",8.00,6,"No Disponible",48.00};
producto PowerRide={"Power",7.00,9,"Disponible",63.00};
void setup(){
  Serial.begin(9600);
  Serial.println("Bienvenido Que Deseas Comprar");
  setpinInput(pushfollow);
  setpinInput(pushback);
}
void loop() {
  if(detectPIN(pushfollow)==HIGH)
  {
    y++;
    x=1;
    delay(T);
  }
  if(detectPIN(pushback)==HIGH)
  {
    y--;
    x=1;
    delay(T);
  }
  if(y>4)
  {
    y=1;
  }
  if (y<1)
  {
    y=4;
  }
 while(x==1){
  switch (y)
  {
    case(1):
    
    Serial.println("Su producto es: ");
    Serial.print("Nombre: ");
    Serial.println(Cola.nombre);
    Serial.print("precio_uni ");
    Serial.println(Cola.precio_uni);
    Serial.print("stock ");
    Serial.println(Cola.stock);
    Serial.print("reserva ");
    Serial.println(Cola.reserva);
    Serial.print("precio_lote ");
    Serial.println(Cola.precio_lote);
    x = 2;
    break;
  
  case(2):
  
    Serial.println("Su producto es: ");
    Serial.print("Nombre: ");
    Serial.println(Doritos.nombre);
    Serial.print("precio_uni ");
    Serial.println(Doritos.precio_uni);
    Serial.print("stock ");
    Serial.println(Doritos.stock);
    Serial.print("reserva ");
    Serial.println(Doritos.reserva);
    Serial.print("precio_lote ");
    Serial.println(Doritos.precio_lote);
    x = 3;
    break;
  
  case(3):
  
    Serial.println("Su producto es: ");
    Serial.print("Nombre: ");
    Serial.println(Pinguinitos.nombre);
    Serial.print("precio_uni ");
    Serial.println(Pinguinitos.precio_uni);
    Serial.print("stock ");
    Serial.println(Pinguinitos.stock);
    Serial.print("reserva ");
    Serial.println(Pinguinitos.reserva);
    Serial.print("precio_lote ");
    Serial.println(Pinguinitos.precio_lote);
    x = 4;
    break;
  
    case(4):
  
    Serial.println("Su producto es: ");
    Serial.print("Nombre: ");
    Serial.println(PowerRide.nombre);
    Serial.print("precio_uni ");
    Serial.println(PowerRide.precio_uni);
    Serial.print("stock ");
    Serial.println(PowerRide.stock);
    Serial.print("reserva ");
    Serial.println(PowerRide.reserva);
    Serial.print("precio_lote ");
    Serial.println(PowerRide.precio_lote);
    x = 2;
    break;
 }
}
}
