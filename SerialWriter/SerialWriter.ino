#include <SoftwareSerial.h>

//SoftwareSerial mySerial(10, 11); // RX, TX


String str = "the quick brown fox jump over the lazy dog doggy...";
char* writable = new char[str.length() + 1];
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  Serial.println("writer ready....");
  writable = str.c_str();
  writable[str.length()] = '\0';
}

// COM6
void loop() { // run over and over
  Serial.write(writable);
  //delay(1000);
}
