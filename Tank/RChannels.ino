
void abc(){

if (receiver_values[1] >100 && receiver_values[1] <320) {
    mode = 2;
  } else if (receiver_values[1] < -100 && receiver_values[1] >-320) {
    mode = 1;
  }
  else if (receiver_values[1] < 100 && receiver_values[1] >-100) {
    mode = 3;
  }
  ///////////////////////////////left
if (receiver_values[2] < 325 && receiver_values[2] >100) {//left up
    mode2 = 1;
    mode = 2;
  }
  else if (receiver_values[2] < -100 && receiver_values[2] >-325) {//left dwn
    mode2 = 2;
    mode = 1;
  }
   else if (receiver_values[2] < 100 && receiver_values[2] >-100) {//left stop
    mode2 = 3;
    mode = 3;
    
  }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   if (receiver_values[0] < 325 && receiver_values[0] >250) {//left up
    mode3 = 1;
  }
  else if (receiver_values[0] < -250 && receiver_values[0] >-325) {//left dwn
    mode3 = 2;
  }
   else if (receiver_values[0] < 250 && receiver_values[0] >-250) {//left stop
    mode3 = 3; 
  }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (receiver_values[3] < 325 && receiver_values[3] >250) {//left up
    mode4 = 1;
  }
  else if (receiver_values[3] < -250 && receiver_values[3] >-325) {//left dwn
    mode4 = 2;
  }
   else if (receiver_values[3] < 250 && receiver_values[3] >-250) {//left stop
    mode4 = 3; 
  }
}
