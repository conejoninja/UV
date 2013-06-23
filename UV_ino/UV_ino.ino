/*
In my case, I'm a Skin Type II and always use SPF 50
Take a look at SPF.md to know from where are those number


*/

int r = 4;
int g = 3;
int b = 2;

void setup() {                
  pinMode(r, OUTPUT);     
  pinMode(g, OUTPUT);     
  pinMode(b, OUTPUT);
  Serial.begin(9600);  
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
  /*longLed(0);
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
  shortLed(5);*/
  int sv = analogRead(A1);
  if(sv<10) {
    sv = 0;
  } else if(sv<46) {
    sv = 1;
  } else if(sv<65) {
    sv = 2;
  } else if(sv<83) {
    sv = 3;
  } else if(sv<103) {
    sv = 4;
  } else if(sv<124) {
    sv = 5;
  } else if(sv<142) {
    sv = 6;
  } else if(sv<162) {
    sv = 7;
  } else if(sv<180) {
    sv = 8;
  } else if(sv<200) {
    sv = 9;
  } else if(sv<221) {
    sv = 10;
  } else {
    sv = 11;
  }  
  
  Serial.println(sensorValue);
  delay(1000);
}
