int buttonPin = 13;  
int led = 9;
int brightness;
int value;
int buttonvalue;         
                     
long millis_held;    
long last_millis; 
byte last_buttonvalue = HIGH;
unsigned long startpress;


void setup() {
  Serial.begin(9600);     
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  
 last_buttonvalue = buttonvalue;
 
    
 buttonvalue = digitalRead(buttonPin);

  if (buttonvalue == 0 && last_buttonvalue == 1) {
    startpress = millis();
  }

/*if (last_buttonvalue == 0 && buttonvalue==1){}*/
    millis_held = (millis() - startpress);



 if(millis_held > 3000){
   value=value+5;
   
  }
  if(millis_held<3000){
    value=value-5;
  }
 Serial.println(value);
analogWrite(led,value);


 

  
}

