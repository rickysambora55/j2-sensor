const int ledPin = 16;
int touchValue;
int angka = 0;

void setup(){
  Serial.begin(115200);
  delay(1000); 
  pinMode (ledPin, OUTPUT);
}

void loop(){
  touchValue = touchRead(4);
//  Serial.print(touchValue);

  if(touchValue < 20){
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    Serial.println(" - LED ON");
    Serial.println(angka);
    angka++;
    
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED OFF");
  }
  delay(500);
}
