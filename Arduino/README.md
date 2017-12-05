To connect the assembled BNO055 breakout to an Arduino Uno, follow the wiring diagram below.
Connect Vin to the power supply, 3-5V is fine. Use the same voltage that the microcontroller logic is based off of. For most Arduinos, that is 5V
Connect GND to common power/data ground
Connect the SCL pin to the I2C clock SCL pin on your Arduino. On an Feather 32u4 RFMx, this is also known as digital 3
Connect the SDA pin to the I2C data SDA pin on your Arduino. On an  On an Feather 32u4 RFMx, this is also known as digital digital 2
