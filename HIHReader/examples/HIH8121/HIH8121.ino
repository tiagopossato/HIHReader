#include <HIHReader.h>
#include <Wire.h>

/* Address of Honeywell sensor shifted right 1 bit */
HIHReader hih8121(0x27);

void setup(){
    Serial.begin(115200);
    Wire.begin();
    hih8121.read();
    Serial.print("Umidade: ");
    Serial.println(hih8121.getHumidity());
    Serial.print("Temperatura: ");
    Serial.println(hih8121.getTemperature());
}
 
void loop()
{
}