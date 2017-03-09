#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
String readString;

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("reader ready....");
}
// COM8
void loop() { // run over and over
  int byteCnt = mySerial.available();
  Serial.println(byteCnt);
  if (byteCnt > 0) {
    char c = mySerial.read();
    Serial.println(c);
    while(c != '\n'){
      readString += c;
      c = mySerial.read();
    }
  } 
  if (readString.length() > 0 && readString.length() >= byteCnt){
    Serial.println(readString);
  }
  readString = "";
  delay(100);
}
