int led = 9;
int brillo = 0;
int fadein = 1;
int fadein2=1;


int led2 = 10;
int brillo2 = 0;


void setup() {
  pinMode(led, OUTPUT);
 
  Serial.begin(9600);
}

void loop() {
  
  analogWrite(led, brillo);
  analogWrite(led2, brillo2);
  
   
    
  if (millis()%1000==0) {
 Serial.println(brillo);


    if (fadein == 1) {
      brillo = brillo + 5;
    } 
     if (fadein == 0) {
    
      brillo = brillo - 5;
    }
    
  }
   if (millis()%3500==0) {
 Serial.println(brillo2);


    if (fadein2 == 1) {
      brillo2 = brillo2 + 5;
    } 
     if (fadein2 == 0) {
    
      brillo2 = brillo2 - 5;
    }
    
  }
  if (brillo == 255) {
      fadein = 0;
    }

  if (brillo == 0) {
      fadein = 1;
    }
      if (brillo2 == 255) {
      fadein = 0;
    }

  if (brillo2 == 0) {
      fadein = 1;
    }

  delay(1);

}


