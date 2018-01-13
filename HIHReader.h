#ifndef HIHREADER_H
#define HIHREADER_H

#include <Arduino.h>
#include <Wire.h>

class HIHReader
{
public:
  HIHReader(int _address);
  void read(float *_temperature, float *_humidity);
private:
  float getHumidity();
  float getTemperature();
  void read();
  float temperature;
  float humidity;
  int address;
};

#endif
