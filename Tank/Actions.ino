void FB(){
   if (mode == 1) {
  motor(1, 1,0);
  motor(3, 1,0);

   // motor(4, 0,1);
//motor(2, 1,0);
  //delay(200);
  Serial.println("F");
 // Serial.println(mode);
  } else if (mode == 2) {
 motor(1, 0,1);
  motor(3, 0,1);
Serial.println("B");
  //motor(2, 0,1);
 //motor(4, 1,0);
  //delay(200);
  }
  else if (mode == 3) {
 motor(1, 0,0);
  motor(3, 0,0);
  Serial.println("StopFB");
  }
  
  
  }

void LR(){
  
   if (mode4 == 1) {
    motor(1, 0,1);
motor(3, 1,0);
//motor(4, 1,0);
//  motor(2, 1,0);
  delay(50);
   Serial.println("R");
  } else if (mode4 == 2) {
motor(1, 0,1);
 motor(3, 1,0);
 //motor(4, 0,1);
  //motor(2, 0,1);
  delay(50);
  Serial.println("L");
  }
  else if (mode4 == 3) {
motor(1, 0,0);
 motor(3, 0,0);
 Serial.println("StopLR");
  }
  
  }
