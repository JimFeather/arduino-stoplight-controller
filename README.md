# Arduino Stoplight Controller
Arduino code that controlls a stoplight.

## Getting Started
Arduino's Getting Started Page:  https://www.arduino.cc/en/Guide/HomePage
### Prerequisites / Requirements

* Development Environment for writing Arduino code
* Arduino Uno
* Relay Board (minimum 3 relays)
* Stop Light

## Wiring Setup
The lights are connected to the arduino in the following manner:
1) Green Lamp -> Relay -> Arduino Pin 6
2) Yellow Lamp -> Relay -> Arduino Pin 7
3) Red Lamp -> Relay -> Arduino Pin 8

## Start up and Expected Behavior
### Start Up
* Upon device boot all three lights will light
### Expected Behavior
* Will cycle from green to yellow to red with a 4 second delay on each light.
## Built With

* [Arduino](https://www.arduino.cc/) - Arduino

## Contributing
Feel free to fork and modify as much as you want.
