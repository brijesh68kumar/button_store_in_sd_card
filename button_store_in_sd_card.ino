#include <SPI.h>
#include <SD.h>
#include <SoftwareSerial.h>
#include <TinyGPS.h>
const int chipSelect = 4;
TinyGPS gps;
SoftwareSerial ss(4, 3);
int analogPin = 8;
void setup() {
  Serial.begin(115200);
  pinMode(analogPin, INPUT);
  while (!Serial) {
    ;
    }
 Serial.print("Initializing SD card...");
 if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    return;
  }
  Serial.println("card initialized.");
}
String  SD_data_date_time; 
String datafile;
void loop() {
   File dataFile = SD.open("datalog.txt", FILE_WRITE);
   datafile = SD_data_date_time +"," ;analogPin;
  if (analogPin == 1)
  {
  for (int analogPin = 1;analogPin > 0; analogPin++) {
  }
  Serial.println(datafile);
  }
  else {
    Serial.println("error opening datalog.txt");
  }
}
