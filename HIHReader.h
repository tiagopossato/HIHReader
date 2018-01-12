#ifndef HIHREADER_H
#define HIHREADER_H

#include <Arduino.h>
#include <Wire.h>

class HIHReader
{
public:
  HIHReader(int _address);
  void read(double *temperature, double *humidity);
private:
  double getHumidity();
  double getTemperature();
  void read();
  double temperature;
  double humidity;
  int address;
};

#endif
