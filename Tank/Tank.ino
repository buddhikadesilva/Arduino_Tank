int A=10;//Motor 1
int B=11;
int C=6;//motor 2
int D=7;

int M3a=8;//motor 3
int M3b=9;

int M4a=4;//motor 4
int M4b=5;

//armPins();
  int Ra=16;//motor arm R
int Rb=17;

int La=14;//motor arm L
int Lb=15;
  


int receiver_pins[] = {A0, A1, A2, A3};
int receiver_values[] = {0, 0, 0, 0, 0, 0};
int res_min = 1100;
int res_max = 1900;

int working_range = 255;// motor driver range
boolean kill=false;
boolean prt = true;

int mode = 0;
int mode1 = 0;
int mode2 = 0;
int mode3 = 0;
int mode4 = 0;
//-1 - transmeter not connected or out of range
//0- trans connected and ready
//1 - low speed
//2 = high speed mode

void setup() {


  pinMode(A, OUTPUT);//motor 1 left
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);//motor 2
  pinMode(D, OUTPUT);

  pinMode(M3a, OUTPUT);//motor 3
  pinMode(M3b, OUTPUT);

  pinMode(M4a, OUTPUT);//motor 3
  pinMode(M4b, OUTPUT);

  pinMode(La, OUTPUT);//motor 3
  pinMode(Lb, OUTPUT);
  pinMode(Ra, OUTPUT);//motor 3
  pinMode(Rb, OUTPUT);
pinMode(8, OUTPUT);//motor 3
  pinMode(9, OUTPUT);

 motor(1, 0,0);
 motor(2, 0,0);
 motor(3, 0,0);
 motor(4, 0,0);

  Serial.begin(115200);
  //Staring delay with LED

digitalWrite(7, HIGH); 
digitalWrite(8, HIGH); 

}

void loopx() {
  digitalWrite(10, !1); 
digitalWrite(11, !0);
 motor(1, 0,0);
 motor(2, 1,0);
 motor(4, 1,0);
 delay(1000);
  motor(2, 0,1);
 motor(4, 0,1);
  delay(1000);
  arm(1, 1,0);
arm(2, 1,0);
  }

void loop() {
  receive();

LR();
 //receive();
FB();
 armControls();

}
