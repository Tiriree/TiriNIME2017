
# Tiri NIME 2017 - TK1971

<a href="http://xxx.tiri.xxx/wp-content/uploads/2017/12/IMG_6948.jpg" rel="attachment wp-att-1112"><img src="http://xxx.tiri.xxx/wp-content/uploads/2017/12/IMG_6948-300x300.jpg" alt="IMG_6948" width="300" height="300" class="alignleft size-medium wp-image-1112" /></a>

## Headpiece
*Gyro Sensor BNO055*

To connect the assembled BNO055 breakout to an Arduino Uno, follow the wiring diagram below.

    Connect Vin to the power supply, 3-5V is fine. Use the same voltage that the microcontroller logic is based off of. 
    For most Arduinos, that is 5V Connect GND to common power/data ground 
    Connect the SCL pin to the I2C clock SCL pin on your Arduino. On an Feather 32u4 RFMx, this is also known as digital 3 
    Connect the SDA pin to the I2C data SDA pin on your Arduino. On an Feather 32u4 RFMx, this is also known as digital digital 2

  [https://learn.adafruit.com/adafruit-bno055-absolute-orientation-sensor/overview](https://learn.adafruit.com/adafruit-bno055-absolute-orientation-sensor/overview)

  [https://learn.adafruit.com/adafruit-feather-32u4-radio-with-rfm69hcw-module/pinouts](https://learn.adafruit.com/adafruit-feather-32u4-radio-with-rfm69hcw-module/pinouts)

## Score

<a href="http://xxx.tiri.xxx/wp-content/uploads/2017/12/NIMEscreen.gif" rel="attachment wp-att-1120"><img src="http://xxx.tiri.xxx/wp-content/uploads/2017/12/NIMEscreen.gif" alt="NIMEscreen" width="320" height="160" class="alignleft size-full wp-image-1120" /></a>

  Using p5 speech written by Luke Dubois, Node socket to send text data to Max
  
  **Usage**
        
    Clone Repository
    Run $ npm install socket.io --save
    Change Directory to scoreNime folder  
    Start $ node server.js


## Special thanks

    Mimi Yin
    R Luke Dubois
    Shawn Van Every
    Tom Igoe
    Allison Parrish
    Aaron Montoya-Moraga
    Aaron Parsekian
    Sam Tarakajian for karma~ tutorial
    Rodrigo Constanzo for karma~ tool
    All ITP residents
    All ITP family
    and Sebastian Morales
