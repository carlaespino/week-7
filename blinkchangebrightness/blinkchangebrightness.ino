
int led1 = 9;
int brightness;
int button1 = 8;
int button2 = 13;
int lastbuttonstate;
int lastbuttonstate2;
int buttonstate;
int buttonstate2;
int value = 255;
int laston = 0;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  

    lastbuttonstate=buttonstate;
    lastbuttonstate2 = buttonstate2;
    buttonstate = digitalRead(button1);
    buttonstate2 = digitalRead(button2);


 
    if (buttonstate < lastbuttonstate) {
      value = value + 5;

    }
   

  if (buttonstate2 < lastbuttonstate2) {
    value = value - 5;

  }
 
 
 

  if (millis() % 1000 == 0) {
    
    laston = 1-laston;
    
    if (laston==1) {
      brightness = 0;
    } else {
      brightness = value;
    }
    analogWrite (led1, brightness);
    Serial.println(brightness);
  }





}
