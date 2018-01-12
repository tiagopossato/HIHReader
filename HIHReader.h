#ifndef HIHREADER_H
#define HIHREADER_H

#include <Arduino.h>
#include <Wire.h>

class HIHReader
{
  public:
    HIHReader(int _address);
    double getHumidity();
    double getTemperature();
    void read();

  private:
  double temperature;
  double humidity;
  int address;
};

#endif
