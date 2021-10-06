# BluetoothHC05
                                                            A simple code to use bluetooth with Arduino.


This code is based on the HC05 bluetooth module. The idea there is simply to create the communication between the Arduino and the bluetooth module. The connexion created, we can command actuators (leds, relays...) by using predefined messages.

The connexion is simple :



Arduino                   ----                      HC05


VCC               -----------------------            5V

GND               -----------------------            GND

TX                -----------------------            Digital Pin(3)

RX                -----------------------            Digital Pin(2)







Image of the HC05 module:  ![image](https://user-images.githubusercontent.com/71699176/136223088-d34ebabb-e007-4b1b-ad62-0b134854c242.png)

Source: amazone
