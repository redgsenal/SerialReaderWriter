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
  if (byteCnt > 0) {
    Serial.println("byte available");
    Serial.println(byteCnt);
    for(int b = 0; b < byteCnt; b++){
      char c = mySerial.read();
      readString += c;      
    }
  }  
  if (readString.length() > 0 && readString.length() >= byteCnt){
    Serial.println(readString); 
    readString = "";
  }
  //delay(100);
}
