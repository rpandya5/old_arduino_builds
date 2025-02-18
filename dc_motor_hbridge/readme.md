# DC Motor Control with H Bridge

<img width="613" alt="Screenshot 2025-02-18 at 4 17 27 PM" src="https://github.com/user-attachments/assets/c1d08509-1a6f-4e58-8867-d228df9bfa55" />


### H-Bridge Circuits
If you wanted to change the direction of the motor, one way you could do this is by switching the wire connections, which reverses the direction of the current flow, resulting in a change of direction. There is also another way to reverse the direction of the current flow using an H-Bridge chip, without changing the wiring.

The simplistic visual of the H-Bridge chip has four pins - Q1-Q4. Q1 and Q3 always have the same state, and Q2 and Q4 always have the same state. If Q1 and Q3 are high, the current flows through Q1, through the motor coil (from left to right in this diagram), and through Q3 to ground. The same thing would occur if Q2+Q4 were high, except the current would flow across the motor coil in the opposite direction (right to left in this diagram), which leads the motor to spin in the opposite direction.

<p align="center">
  <img src="https://github.com/user-attachments/assets/364dec9d-13b0-4bc1-a074-65d482d631d3" width="26%">
  <img src="https://github.com/user-attachments/assets/1005e1c2-6e14-4a9d-b6e8-1f4339476561" width="45%">
</p>

### L293D Chip Details
- Pin 8 (and 16) provide that side of the chip with power. To wire 2 separate motors to this chip, you would wire both pin 8 and 16 for power.
- Pins 1 and 9 are the enabler pins: they determine whether or not the motor is on
- 1A = Pin 2 = Q1, 2A = Pin 7 = Q2. To turn the motor forward, set 1A to high+2A to low, and to turn it in the opposite direction, set 2A to high+1A to low

In this circuit, if the switch is high, it turns the motor in one direction, and if the switch is low the motor turns in the opposite direction.
