# Arduino Dinosaur Bot 🦖

A physical hardware bot designed to automate the Chrome Dinosaur game using an Arduino Uno, a light sensor, and a servo motor.

## How it Works
The bot uses a **Light Dependent Resistor (LDR)** to monitor a specific point on the screen. When a cactus passes under the sensor, the light intensity drops, triggering the Arduino to actuate a **Servo Motor** that physically presses the "Space" key.

### Key Components
* **Arduino Uno** 
* **Servo Motor** (connected to Pin 9)
* **LDR / Photoresistor** (connected to Pin A4)

### Software Logic
The code utilizes a simple threshold-based trigger system:
* **Threshold:** 550 (adjustable based on screen brightness).
* **Actuation:** The servo moves from an `unpress_angle` (110°) to a `press_angle` (86°) to simulate a keypress.
* **Timing:** A small delay is implemented to prevent multiple jumps for a single obstacle.

## Setup
1. Connect the LDR to analog pin A4.
2. Connect the Servo signal to digital pin 9.
3. Calibrate the `threshold` value in the code based on your monitor's contrast settings.

[Watch the video of the bot in action here](./Dinasaur Game.mp4)
