#include <Arduino.h>
#include "SparkFunHTU21D.h"

HTU21D myHumidity;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  myHumidity.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  float humd = myHumidity.readHumidity();
  float temp = myHumidity.readTemperature();

  Serial.print(" Temperature:");
  Serial.print(temp, 1);
  Serial.print("C");
  Serial.print(" Humidity:");
  Serial.print(humd, 1);
  Serial.print("%");

  Serial.println();

  delay(2000);

}