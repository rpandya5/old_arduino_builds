# Temperature Sensor

<img width="573" alt="Screenshot 2025-02-18 at 4 14 28 PM" src="https://github.com/user-attachments/assets/6a569bb4-d21e-4edf-abb2-b3cc36a7ab47" />

Core concepts:

- analogRead(): Reads analog values from pins A0-A5 (between 0-5V), and converts it to a number between 0-1023.

- map(a, b, c, d): Maps one range of numbers to another range of numbers. Range 1 = a → b, and Range 2 = c → d. a value gets mapped to c value, and b value gets mapped to d value.

In this extension, degrees celsius is mapped to a frequency between 2000 and 100: the colder the temperature, the higher the frequency.

- tone(): Used on a PWM pin, and outputs a sound frequency

### Wiring Notes
- TMP sensor wiring: 
  - Pin 1 is connected to Vin
  - Pin 3 is connected to ground
  - Pin 2 is connected to analog pins (A0-A5)
- Piezo Wiring:
  - Pin 1 is connected to a PWM pin
  - Pin 2 is connected to ground
