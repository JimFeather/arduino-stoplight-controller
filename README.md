# arduino-stoplight-controller
## Arduino Stoplight Controller

This is the Arduino code that controls a stoplight.

There are 3 physical components needed in addition to the controller code.
- Stop light
- Arduino Uno
- Relay Board

The lights are connected to the arduino in the following manner:
1) Green Lamp -> Relay -> Arduino Pin 6
2) Yellow Lamp -> Relay -> Arduino Pin 7
3) Red Lamp -> Relay -> Arduino Pin 8

Upon powering on, all lights will light, 
then it will sequence from green -> yellow -> red with a 4 second delay.