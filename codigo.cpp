#include <ArduinoJson.h>

int press_1;
int press_2;
float temp;
int bat;
int ledVermelho = 6;
int ledVerde = 7;
int alarme = 8;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(alarme, OUTPUT);
}

void loop() {
  digitalWrite(alarme, LOW);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, HIGH);
  press_1 = random(75, 155);
  press_2 = random(50, 100);
  temp = random(0, 10)*0.1 + random(33, 40);
  bat = random(40, 101);

  
  if(press_1 < 90 || press_2 < 60){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(alarme, HIGH);
    tone(alarme, 262,100);
  }
  else if(press_1 > 140 || press_2 > 90){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(alarme, HIGH);
    tone(alarme, 262,100);
  }

  
  if(temp < 35){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(alarme, HIGH);
    tone(alarme, 262,100);
  }
  else if(temp > 37.3){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(alarme, HIGH);
    tone(alarme, 262,100);
  }
  

  if(bat < 50){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(alarme, HIGH);
    tone(alarme, 262,100);
  }
  else if(bat > 90){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(alarme, HIGH);
    tone(alarme, 262,100);
  }


  Serial.println();


  StaticJsonDocument<200> doc;
  doc["pressao_1"] = press_1;
  doc["pressao_2"] = press_2;
  doc["temperatura"] = temp;
  doc["batimentos"] = bat;
  serializeJson(doc, Serial);


  delay(1000);
  digitalWrite(alarme, LOW);
  delay(3000);
}
