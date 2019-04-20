#include <Servo.h>

Servo servo;

int A = 10; //Motor 1
int B = 11;
int C = 6; //motor 2
int D = 7;


int fire1 = 46; //Motor 1
int fire2 = 48;
int fire3 = 50; //motor 2
int fire4 = 52;

char choice;

int x = 30;
boolean stat = false;
boolean ON = false;
void setup() {
  Serial.begin(9600);


  servo.attach(9);

  pinMode(A, OUTPUT);//motor 1 left
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);//motor 2
  pinMode(D, OUTPUT);
  
    pinMode(fire1, OUTPUT);//motor 1 left
  pinMode(fire2, OUTPUT);
  pinMode(fire3, OUTPUT);//motor 2
  pinMode(fire4, OUTPUT);

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);

  
  digitalWrite(fire1, HIGH);
  digitalWrite(fire2, HIGH);
  digitalWrite(fire3, HIGH);
  digitalWrite(fire4, HIGH);

}


void loop() {


  if (Serial.available()) {
    choice = Serial.read();
  }

  if (choice == 'k') {
     ON = true;
    }
      if (choice == 'l') {
     ON = false;
    }
if(ON){
  if (choice == '1') {
    Serial.println("Forward...");
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);

  }
  if (choice == '0') {

    Serial.println("Reverse...");
    Serial.println("Forward...");
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    // delay(2000);

  }
  if (choice == '3') {
    Serial.println("Rotating LEFT");

    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
  }
  if (choice == '4') {
    if (x < 30) {
      x = 30;
    }
    servo.write(x--);

    delay(10);
    // delay(2000);



  }
  if (choice == '5') {

    if (x > 150) {
      x = 150;
    }
    servo.write(x++);

    delay(10);
    // delay(2000);



  }

    if (choice == 'a') {
 digitalWrite(fire1, LOW);
  }else{
     digitalWrite(fire1, HIGH);
    }

   if (choice == 'b') {
 digitalWrite(fire2, LOW);
  }else{
     digitalWrite(fire2, HIGH);
    }

   if (choice == 'c') {
 digitalWrite(fire3, LOW);
  }else{
     digitalWrite(fire3, HIGH);
    }
   if (choice == 'd') {
 digitalWrite(fire4, LOW);
  }else{
     digitalWrite(fire4, HIGH);
    }
  }

  
}
