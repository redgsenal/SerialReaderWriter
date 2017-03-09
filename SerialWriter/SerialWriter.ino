#include <SoftwareSerial.h>

//SoftwareSerial mySerial(10, 11); // RX, TX


String cnt = "count ";
  
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  Serial.println("writer ready....");
}

// COM6
void loop() { // run over and over
  Serial.write("the quick brown fox jump over the lazy dog doggy...\n");
  //delay(1000);
}
