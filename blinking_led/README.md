# Blinking LED

<img width="767" alt="Screenshot 2025-02-18 at 4 10 18 PM" src="https://github.com/user-attachments/assets/4c5124b5-ec46-4404-980f-5335843007a5" />


This program makes an LED light increase in brightness. The light goes from off, to 25%, to 50%, to 75%, to finally being fully on, all with .5 second delays in between.

**Void Setup:** Created in the beginning of every program, typically used to initialize variables. Any code inside the void setup loop runs only once, at the beginning of the program.  The ‘void’ in front of setup means that it does not accept any parameters.

**Void loop:** Any code inside void loop will run repeatedly. The ‘void’ in front of loop means that it does not accept any parameters. 

**pinMode(*pin number*, *INPUT / OUTPUT*):** sets specific pin as an input or output. 

**digitalWrite(*pin number*, *HIGH / LOW*):** Turns pin on (high), or off (low). The pin number must be an output. 

**analogWrite(*pin number*, *# between 0-255*):** Uses PWM (pulse width modulation). Rather than having light only be high or low, PWM and analogWrite allow for the light’s brightness to be altered. The 2nd parameter determines the duty cycle, which dictates the % of time the light is on. The light flashes on and off very quickly. A longer duty cycle creates the illusion of the light being brighter, and a shorter duty cycle makes the light look dimmer. 

**delay(*time in milliseconds*):** pauses the program for a certain amount of time.
