int r = 4;
int g = 3;
int b = 2;

void setup() {                
  pinMode(r, OUTPUT);     
  pinMode(g, OUTPUT);     
  pinMode(b, OUTPUT);     
}

void ledOn(int led) {
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  switch(led) {
    case 5:
      digitalWrite(r, HIGH);
      break;   
    case 2:
      digitalWrite(g, HIGH);
      break;   
    case 3:
      digitalWrite(b, HIGH);
      break;   
    case 4:
      digitalWrite(r, HIGH);
      digitalWrite(b, HIGH);
      break;   
    case 1:
      digitalWrite(g, HIGH);
      digitalWrite(b, HIGH);
      break;   
    case 0:
      digitalWrite(r, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(b, HIGH);
      break;   
  } 
}

void ledOff() {
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
}

void longLed(int led) {
  ledOn(led);
  delay(900);  
  ledOff();
  delay(100);  
}

void shortLed(int led) {
  ledOn(led); delay(100); ledOff(); delay(100);  
  ledOn(led); delay(100); ledOff(); delay(100);  
  ledOn(led); delay(100); ledOff(); delay(100);  
  ledOn(led); delay(100); ledOff(); delay(100);  
  ledOn(led); delay(100); ledOff(); delay(100);  
}

void loop() {
  longLed(0);
  shortLed(0);
  longLed(1);
  shortLed(1);
  longLed(2);
  shortLed(2);
  longLed(3);
  shortLed(3);
  longLed(4);
  shortLed(4);
  longLed(5);
  shortLed(5);
}
