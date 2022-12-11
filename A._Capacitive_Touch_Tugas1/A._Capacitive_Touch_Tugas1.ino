const int ledPin = 16;
int touchValue;

void setup(){
  Serial.begin(115200);
  delay(1000); 
  pinMode (ledPin, OUTPUT);
}

void loop(){
  touchValue = touchRead(4);
  Serial.print(touchValue);

  if(touchValue < 20){
    digitalWrite(ledPin, HIGH);
    Serial.println(" - LED ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED OFF");
  }
  delay(500);
}
