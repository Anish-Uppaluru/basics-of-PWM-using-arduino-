# basics-of-PWM-using-arduino-

PWM-pulse width modulation is essentially controlling input voltage to the load in order to gain desirable effect from load in this case load is the led and the desirable outcome i want is in the form of 2 PHASES PHASE1- individual leds brightness must decrease finally becoming zero kickstarting the next leds brightness to 0 and so on and PHASE2- all leds must Synchronously light up and Synchronous be switched off(i have performed the above only with the help of analogWrite,digitalWrite,for loops,no arrays have been used because i have not reached that level yet)

initialising pwm from arduino-
from my previous project i connected 4 resistors 4 leds(working and placement in my last project) on a breadboard and connected the free terminal of the resistor to arduino pins having squibbly lines on them these pins are called pwm pins and from them i can control the brightness of the bulb 

Project Overview:
Pulse Width Modulation (PWM) is a technique used to control the average power delivered to a load by varying the duty cycle of a rapidly switching digital signal. In this project, the load is an LED, and the desired outcome is to control its perceived brightness.
The circuit consists of four LEDs connected to an Arduino Uno R3 through individual current-limiting resistors. The LEDs are connected to digital pins 11, 10, 9, and 6.

Operating Phases:
Phase 1 — Individual LED Fading
Each LED operates individually in sequence. Its brightness gradually increases from OFF to maximum brightness and then decreases back to OFF. Once one LED completes its fading cycle, the next LED begins.
This phase uses analogWrite() to control PWM duty cycle and for loops to increment and decrement the brightness value.
Phase 2 — Synchronous ON/OFF Switching
After all four LEDs complete Phase 1, they switch ON simultaneously at maximum brightness. They remain ON for one second and then switch OFF simultaneously. The sequence then repeats.
This phase uses digitalWrite() for synchronous switching and delay() to control the duration.

Initialising PWM on the Arduino:
The Arduino Uno R3 has PWM-capable digital pins marked with a ~ symbol. These include pins 3, 5, 6, 9, 10, and 11.
This project uses pins 11, 10, 9, and 6 to control the four LEDs.
The analogWrite() function accepts values from 0 to 255 on the Arduino Uno R3:
0: 0% duty cycle; LED OFF.
128: Approximately 50% duty cycle.
255: 100% duty cycle; maximum brightness.
PWM does not directly generate a continuously adjustable analog voltage at the output pin. Instead, the pin rapidly switches between LOW and HIGH. Varying the duty cycle changes the average power delivered to the LED and therefore its perceived brightness.

Syntax Features Used:

Variable declaration (int): Stores the Arduino pin numbers.
setup(): Runs once at startup and configures the LED pins as outputs using pinMode().
loop(): Repeats the two operating phases continuously.
analogWrite(): Controls LED brightness through PWM.
digitalWrite(): Switches LEDs ON using HIGH and OFF using LOW.
for loops: Increment and decrement the PWM value from 0 to 255 and back to 0, creating gradual fading.
delay(): Introduces timing intervals between brightness steps and controls the ON/OFF durations.



Learning Outcomes:
Understanding PWM and duty-cycle-based brightness control.
Implementing gradual LED fading using for loops.
Using digital outputs for simultaneous LED switching.
Applying variables, loops, and timing in an Arduino program.
Observing PWM signals using Tinkercad's virtual oscilloscope.

Hardware Components:
Arduino Uno R3
Four LEDs
Four current-limiting resistors (220–330 Ω)
Breadboard
Jumper wires

Project Result:
The completed program sequentially fades each LED in and out, switches all four LEDs ON together, and then switches them OFF together before restarting the cycle.
