#include <HIHReader.h>
#include <Wire.h>

/* Address of Honeywell sensor shifted right 1 bit */
HIHReader hih8121(0x27);
double temperature;
double humidity;
void setup() {
  Serial.begin(115200);
  Wire.begin();
  hih8121.read(&temperature, &humidity);
  Serial.print("Umidade: ");
  Serial.println(humidity);
  Serial.print("Temperatura: ");
  Serial.println(temperature);
}

void loop()
{
}