# Reflective Object Sensors
<img width="548" alt="Screenshot 2025-02-18 at 4 22 29 PM" src="https://github.com/user-attachments/assets/72f2c62f-1e52-44b2-8e72-0b862545e3b8" />


### How it Works
IR sensors detect the presence of objects by bouncing light off them. The light hits the sensor and turns on the photo resistor which can be detected by the circuit. In this extension, if the object is detected, the LED starts flashing. If no object is detected, the LED does not flash.

<img width="400" alt="Screenshot 2025-02-18 at 4 22 51 PM" src="https://github.com/user-attachments/assets/9fd59d74-ffde-4814-803d-68fdcceecdc9" />

### Flow of Program
1. Read IR sensor input
2. If object detected:
   - Print "DETECTED" to serial monitor
   - Turn LED on
   - Wait 500ms
   - Turn LED off
   - Wait 500ms
   - Repeat
3. If no object detected:
   - Print "NOT DETECTED" to serial monitor
   - Keep LED off
   - Continue monitoring
