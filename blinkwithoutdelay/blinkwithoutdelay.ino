
int led1=10;
int ledState1=HIGH;
int ledState2=HIGH;
int led2=9;

void setup() {
  
  pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);

}

void loop() {
  
if(millis()%1000==0){
  if(ledState1==HIGH){
    ledState1=LOW;
  }else{
     ledState1=HIGH;
    }
  digitalWrite (led1,ledState1);
  }

  if(millis()%2001==0){
  if(ledState2==HIGH){
    ledState2=LOW;
  }else{
     ledState2=HIGH;
    }
  digitalWrite (led2,ledState2);
  }



}
