# DC Motor Control

<img width="560" alt="Screenshot 2025-02-18 at 4 16 21 PM" src="https://github.com/user-attachments/assets/03bde9f3-ccfb-4d98-8aa3-9edb88d5dae1" />


Core concepts:

### For Loops
Allows you to control how many times you're running commands. The for loop has 3 parameters - variable declaration and/or initialization, condition, and increment/decrement and by how much). As long as the condition is true, the block of code underneath the for loop will run.

### Wiring a Motor
Small DC toy motors draw more than 40 mA of current, which is greater than what is supplied by the Arduino digital output pin. Rather than directly connecting the pin to the motor (which can damage the board), you can use a transistor to amplify the current.

Arduino digital pin 3 is connected to the middle pin of the transistor (Base pin). GND is connected to the emitter pin of the transistor (left), and the 5V power connected to collector pin. The base pin controls the current flowing from the collector to the emittor pins. Between the 5V connection and motor pins, there's also a diode which ensures that the current only flows in one direction. It prevents any spikes of voltage from damaging the arduino board.
