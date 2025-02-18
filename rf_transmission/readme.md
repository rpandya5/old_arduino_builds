# RF Transmitter + Receiver

<img width="1309" alt="Screenshot 2025-02-18 at 4 25 02 PM" src="https://github.com/user-attachments/assets/4d8911a9-e157-4920-bd2d-747d403ec05d" />

### How it Works
RF modules are used to communicate information over wifi, bluetooth, or other systems. 

### Wiring Details
The transmitter has 3 pins:
- Pin 1: Connected to input data
- Pin 2: Connected to power
- Pin 3: Connected to ground

The receiver has 4 pins:
- Pin 1: Connected to power
- Pin 2 and 3: Can be connected to output
- Pin 4: Connected to ground

Because these chips were 433 mHz, the distance at which these chips can operate is 1/4 of that - 17.3 cm, but this length can be extended with an antenna.

### Technical Details
- The transmitter creates an ASK object (RH_ASK driver), creates a message (stored in msg), and sends it using the driver.
- The receiver also creates an ASK object in the same way, creates a buffer (which is the size of the expected message), and if the message is equal to the size of the buffer, the program continues to do its actions. In this case, if the message is 1, it turns the LED on, otherwise it turns the LED off.

### Amplitude Shift Keying (ASK)
Without ASK, the waves have no modulation and are unusable by the receiver. Amplitude Shift Keying modulates these waves, turns them into square waves that are detectable by sensors because they're set at 1 or 0.
