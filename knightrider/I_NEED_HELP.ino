int led1=11;
int led2=10;
int led3=9;
int but1;
int but2;
int but3;
int value1=255;
int value2=255;
int value3=255;

void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (but1, INPUT_PULLUP);
pinMode (but2, INPUT_PULLUP);
pinMode (but3, INPUT_PULLUP);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
 
 
if(millis()%1000==0){

     value1=255;
    value2=0;
    value3=0;
    delay(1);
    analogWrite(led1,value1);
  analogWrite(led2,value2);
  analogWrite(led3,value3); 
    
  }if(millis()%2000==0){
   
            value1=0;
      value2=255;
      value3=0;
      analogWrite(led1,value1);
  analogWrite(led2,value2);
  analogWrite(led3,value3); 
delay(1);
      
        
    }if(millis()%3000==0){
    

    
      value1=0;
      value2=0;
          value3=255;
          delay(1);
          analogWrite(led1,value1);
  analogWrite(led2,value2);
  analogWrite(led3,value3); 
    }
    
  
}


