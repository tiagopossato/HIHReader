
# Humidity and Temperature Reader for Honeywell Sensors using Arduino platform

Reads temperature and humidity from Honeywell sensors using the i2c interface.  
**Sensors with SPI output are *not* supported!**  
Likely to work with the following sensors:

- 1.7 percent relative humidity accuracy [(Datasheet)](http://sensing.honeywell.com/honeywell-sensing-humidicon-hih9000-series-product-sheet-009076-7-en2.pdf):  
HIH9120-021-xxxx  
HIH9121-021-xxxx  
HIH9130-021-xxxx  
HIH9131-021-xxxx  

- 2 percent relative humidity accuracy [(Datasheet)](http://sensing.honeywell.com/index.php?ci_id=147072):  
HIH8120-021-xxxx  
HIH8121-021-xxxx  
HIH8130-021-xxxx  
HIH8131-021-xxxx (tested with this sensor)  

- 3 percent relative humidity accuracy [(Datasheet)](http://sensing.honeywell.com/honeywell-sensing-humidicon-hih7000-series-product-sheet-009074-6-en.pdf):  
HIH7120-021-xxxx  
HIH7121-021-xxxx  
HIH7130-021-xxxx  
HIH7131-021-xxxx  

- 4 percent relative humidity accuracy [(Datasheet)](http://sensing.honeywell.com/honeywell-sensing-humidicon-hih6100-series-product-sheet-009059-6-en.pdf):  
HIH6120-021-xxxx  
HIH6121-021-xxxx  
HIH6130-021-xxxx  
HIH6131-021-xxxx  

- 4 percent relative humidity accuracy [(Datasheet)](http://sensing.honeywell.com/index.php?ci_id=147070):   
HIH6120-021-xxxx  
HIH6121-021-xxxx  
HIH6130-021-xxxx  
HIH6131-021-xxxx  

The code follows the [Technical Note on I2C communication with Honeywell sensors](http://sensing.honeywell.com/i2c-comms-humidicon-tn-009061-2-en-final-07jun12.pdf)

See also: [Blog post on interfacing Honeywell humidity sensors on a Raspberry Pi 2](https://www.karlrupp.net/2016/03/raspberry-pi-honeywell-humidity-temperature-sensor).

## License

The code is provided under a permissive MIT/X11-style license.
See file LICENSE.txt for details.

