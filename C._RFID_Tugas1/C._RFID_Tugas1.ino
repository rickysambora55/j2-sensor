#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
#define SS_PIN 21
#define RST_PIN 22

Servo myservo;
MFRC522 rfid(SS_PIN, RST_PIN);
byte keyTagUID[4] = {0xE7, 0xB4, 0xE8, 0x3F};
const int ledPin = 12;
const int ledPin2 = 32;
int pos = 0;

void setup() {
  Serial.begin(115200);
  SPI.begin();
  rfid.PCD_Init();
  Serial.println("Tap RFID/NFC Tag on reader");
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  myservo.attach(4);
}
void loop() {
  if (rfid.PICC_IsNewCardPresent()) {
    if (rfid.PICC_ReadCardSerial()) {
      MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
      if (rfid.uid.uidByte[0] == keyTagUID[0] &&
          rfid.uid.uidByte[1] == keyTagUID[1] &&
          rfid.uid.uidByte[2] == keyTagUID[2] &&
          rfid.uid.uidByte[3] == keyTagUID[3] ) {
        Serial.println("Access is granted");
        digitalWrite(ledPin, HIGH);
        digitalWrite(ledPin2, LOW);
        for (pos = 0; pos < 180; pos += 1)
        {
          myservo.write(pos);
          delay(15);
        }
        delay(3000)
        for (pos = 180; pos >= 1; pos -= 1)
        {
          myservo.write(pos);
          delay(15);
        }
      }
      else
      {
        Serial.print("Access denied for user with UID:");
        for (int i = 0; i < rfid.uid.size; i++) {
          Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
          Serial.print(rfid.uid.uidByte[i], HEX);
          digitalWrite(ledPin, LOW);
          digitalWrite(ledPin2, HIGH);
        }
        Serial.println();
      }
      rfid.PICC_HaltA();
      rfid.PCD_StopCrypto1();
    }
  }
}
