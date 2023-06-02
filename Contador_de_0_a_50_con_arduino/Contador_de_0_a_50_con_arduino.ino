/*
  Fundacion Kinal
  Centro Educativo Tecnico Laboral Kinal
  Electronica
  Grado: Quinto
  Seccion: A
  Cuerso: Taller de Electronica Digital y Reparacion de Computadoras I
  Nombre: Edgar Leonel Ramírez Estrada
  Carnet: 2019410
  Proyecto: Contador de 0 a 50 con Arduino/display
*/
#define pin_input(pin) pinMode(pin,INPUT);
#define pin_output(pin) pinMode(pin,OUTPUT);

#define push_rising 3
#define push_falling 2

#define a  4
#define b  5
#define c  6
#define d  7
#define a1 8
#define b1 9
#define c1 10
#define d1 11

void funcion_ISR_falling(void);
void funcion_ISR_rising(void);

volatile static bool f_print = false;
int i = 0;
int conteo;

void setup() {
  pin_output(a);
  pin_output(b);
  pin_output(c);
  pin_output(d);
  pin_output(a1);
  pin_output(b1);
  pin_output(c1);
  pin_output(d1);
  pin_input(push_rising);
  pin_input(push_falling);
  attachInterrupt(digitalPinToInterrupt(push_rising), funcion_ISR_rising, RISING);
  attachInterrupt(digitalPinToInterrupt(push_falling), funcion_ISR_falling, FALLING);
}

void loop() {
  if (f_print) {
    f_print = false;
  }
  if(i<0){
    i = 50;
  }
  if(i>50){
    i=0;
  }
  switch (i) {
  
    case 0:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 1:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 2:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 3:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 4:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 5:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 6:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 7:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 8:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 9:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 10:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 11:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 12:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 13:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 14:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 15:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 16:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 17:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 18:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 19:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 20:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 21:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 22:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;

    case 23:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;
    case 24:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 25:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 26:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 27:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;
    case 28:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 29:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 30:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;       
    case 31:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;      
    case 32:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;      
    case 33:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;       
    case 34:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;  
    case 35:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;  
    case 36:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;               
    case 37:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;   
    case 38:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;
    case 39:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;  
    case 40:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;        
    case 41:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;    
    case 42:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;          
    case 43:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;               
    case 44:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;   
    case 45:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;               
    case 46:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;  
    case 47:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, HIGH);
      digitalWrite(c1, HIGH);
      digitalWrite(d1, LOW);
      break;     
    case 48:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;               
    case 49:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, HIGH);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, HIGH);
      break;           
    case 50:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;       
    case 51:
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);
      digitalWrite(a1, LOW);
      digitalWrite(b1, LOW);
      digitalWrite(c1, LOW);
      digitalWrite(d1, LOW);
      break;       
  }
}


void funcion_ISR_falling(void) {
  f_print = true;
  i++;
}

void funcion_ISR_rising(void) {
  f_print = true;
  i--;
}
