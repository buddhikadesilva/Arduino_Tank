

    void arm(int motor,int INa,int INb){
    if(motor==1){

digitalWrite(Ra, INa); 
digitalWrite(Rb, INb); }
else if(motor==2){

digitalWrite(La, INa); 
digitalWrite(Lb, INb); }
    }


    void armControls(){
  
   if (mode2 == 1) {
    arm(1, 1,0);
arm(2, 1,0);
motor(4, 1,0);
  motor(2, 1,0);
 // delay(100);
   Serial.println("armDown");
  } else if (mode2 == 2) {
arm(1, 0,1);
 arm(2, 0,1);
 motor(4, 0,1);
  motor(2, 0,1);
 // delay(100);
  Serial.println("armUP");
  }
  else if (mode2 == 3) {
arm(1, 0,0);
 arm(2, 0,0);

 motor(4, 0,0);
  motor(2, 0,0);
 Serial.println("StoprmA");
  }
  
  }
