void stopR(int a){

if(a==1){

  digitalWrite(A, HIGH); 
digitalWrite(B, HIGH); 
  
  }else if(a==2){

  digitalWrite(A, HIGH); 
digitalWrite(B, HIGH); 
  
  }else if(a==3){

  digitalWrite(M3a, HIGH); 
digitalWrite(M3b, HIGH); 
  
  }

  
  

}
void stopL(){
 
digitalWrite(C, HIGH); 
digitalWrite(D, HIGH); 
  }

  void upR(){
  digitalWrite(A, HIGH); 
digitalWrite(B, LOW); 

  }
    void upL(){
 
digitalWrite(C, LOW); 
digitalWrite(D, HIGH); 
  }

  void downR(){
  digitalWrite(A, LOW); 
digitalWrite(B, HIGH); 

  }
   void downL(){

digitalWrite(C, HIGH); 
digitalWrite(D, LOW); 
  }

  void motor(int motor,int INa,int INb){
    if(motor==1){

digitalWrite(A, !INa); 
digitalWrite(B, !INb); }
else if(motor==2){

digitalWrite(C, !INa); 
digitalWrite(D, !INb); }

else if(motor==3){

digitalWrite(M3a, !INa); 
digitalWrite(M3b, !INb); 

    }
    else if(motor==4){

digitalWrite(M4a, !INa); 
digitalWrite(M4b, !INb); }


    }
