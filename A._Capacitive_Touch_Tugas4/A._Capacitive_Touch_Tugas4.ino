const int ledPin = 16;
const int ledPin2 = 17;
const int ledPin3 = 5;
int touchValue;
int angka = 0;

void setup(){
  Serial.begin(115200);
  delay(1000); 
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
}

void loop(){
  touchValue = touchRead(4);
//  Serial.print(touchValue);

  if(touchValue < 20){
    digitalWrite(ledPin3, HIGH);
    delay(50);
    digitalWrite(ledPin3, LOW);
    delay(50);
    digitalWrite(ledPin2, HIGH);
    delay(50);
    digitalWrite(ledPin2, LOW);
    delay(50);
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    delay(50);
    digitalWrite(ledPin, HIGH);
    delay(50);
    digitalWrite(ledPin, LOW);
    delay(50);
    digitalWrite(ledPin2, HIGH);
    delay(50);
    digitalWrite(ledPin2, LOW);
    delay(50);
    digitalWrite(ledPin3, HIGH);
    delay(50);
    digitalWrite(ledPin3, LOW);
    delay(50);
    Serial.println(" - LED ON");
  }
  else{
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    Serial.println(" - LED OFF");
  }
}
