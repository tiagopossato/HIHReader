#include "HIHReader.h"

HIHReader::HIHReader(int _address)
{
  address = _address;
}

float HIHReader::getHumidity()
{
  return humidity;
}

float HIHReader::getTemperature()
{
  return temperature;
}

bool HIHReader::read()
{
  unsigned char buf[4] = {}; /* Buffer for data read/written on the i2c bus */
  unsigned char i = 0;
  bool status = false;
  //Initiate measurement by sending a zero bit (see datasheet for communication pattern)
  Wire.beginTransmission(address); // transmit to device
  Wire.write(0);                   // sends one byte
  Wire.endTransmission();          // stop transmitting
  //Wait for 80ms for measurement to complete.
  //Typical measurement cycle is 36.65ms for each of humidity and temperature, so you may reduce this to 74ms.
  delay(80);
  //read back data
  Wire.requestFrom(address, 4); // request 4 bytes from device

  while (Wire.available())
  {
    buf[i] = Wire.read();
    i++;
  }

  //verifica se a resposta está zerada
  for (int i = 0; i < 4; i++)
  {
    if (buf[i] != 0)
      status = true;
  }
  if (!status)
  {
    temperature = -127.0;
    humidity = -127.0;
    return status;
  }
  //Humidity is located in first two bytes
  int reading_hum = (buf[0] << 8) + buf[1];
  humidity = reading_hum / 16382.0 * 100.0;
  //Temperature is located in next two bytes, padded by two trailing bits
  int reading_temp = (buf[2] << 6) + (buf[3] >> 2);
  temperature = reading_temp / 16382.0 * 165.0 - 40;

  return status;
}

bool HIHReader::read(float *_temperature, float *_humidity)
{
  bool status = read();
  *_temperature = temperature;
  *_humidity = humidity;
  return status;
}
