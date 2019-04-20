int rp = 0;
void receive() {

  receiver_values[rp] = map(pulseIn (receiver_pins[rp], HIGH), res_min, res_max, -1 * working_range, working_range);
  rp++;
  if (rp == 4) {
    rp = 0;
  }
  boolean activevalues = true;
  for (int i = 0; i < 4; i++) {
    if (prt) {
      Serial.print("CH");
      Serial.print(i);
      Serial.print(" : ");
      Serial.print(receiver_values[i]);
      Serial.print(",\t");
      
    }
    if (receiver_values[i] < -500) {
      activevalues = false;
   
    }
  }

 abc();

  if (prt) {
    Serial.println("");
  }
}
 
  
  
