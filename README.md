# SMARS-Robot

Little 3D printed arduino SMARS (Screwless Modular Assembleable Robotic System) robot with UltraSonic attachment and code. This is a nice little project do due with your gild, or to give as a gift. It introduces to robotcs and the Arduino system quite entertainingly. Attachements are available from the creator's website ([SMARS modular robot]).

# Photo/Video Demonstration

![SMARS-Robot Photo](https://imgur.com/sVUaw9x)

  - Need to make the video. I actually just need to get a new 9V battery.

# Installation

To program the [Arduino Uno], you need the [Arduino IDE], so download and install that.
Once this is done, you need the [Ultrasonic Library] by [Erick Simões]. Below is a copy and past of his installation instructions:

  - Click in ```Sketch > Include Library > Manage Libraries...```;
  - In the search field type: ```ultrasonic```;
  - In the list, look for ```Ultrasonic by Erick Simões```;
  - Click on ```Install```.

Once this is done, open the `smars_us.ino` in the [Arduino IDE]. Don't forget to select the correct board in `Tools -> Boards`. and hit **Upload**.

# Understanding the script

The default script makes the robot look if it is 5cm away from an obstacle. If not it moves forwards otherwise it rotates anticlockwise.
You may easily modify the minimum distance, the forward delay (delay between the time the motors are brought to speed and the time they are stopped) and the rotation delay (similar to forward delay but with the rotation function).

```
#define minDistance 5
#define delayForwards 1000
#define delayRotate 5
#define delayLoop 100
```

# 3D Printing
They are a couple parts to print for this project. I used a CREALITY 10, but the choice is up to you. The print is quite long (> 1 full day). You should print them saperatly. I used PLA with a bed heated at 60°C and a extruder at 200°C.

 - First the chassie.
      ```
     - Layer Height: 0.16mm
     - Infill: 40%
     - Support (only from bottom) : ON
     - Adhesion layer : ON
     - Time: >6h
     ```
 - Mechanical tracks (2 are in the file) & Holding boards x 20:
    ```
     - Layer Height: 0.16mm
     - Infill: 60%
     - Support (only from bottom) : OFF
     - Adhesion layer : ON
     - Time: >6h
     ```
 - Holding boards x 12:
    ```
     - Layer Height: 0.16mm
     - Infill: 60%
     - Support (only from bottom) : OFF
     - Adhesion layer : ON
     - Time: >3h
     ```
 - Slave and master wheels x2 (each): **You need to rotate the master wheels upside down** (That is with the part through which the motor goes ontop)
    ```
     - Layer Height: 0.16mm
     - Infill: 40%
     - Support (only from bottom) : ON
     - Adhesion layer : ON
     - Time: >6h
     ```
 - Ultrasonic connectors (3parts in total):
    ```
     - Layer Height: 0.16mm
     - Infill: 40%
     - Support (only from bottom) : OFF
     - Adhesion layer : ON
     - Time: >4h
     ```

To connect the mechanical tracks together, just use the 3D printer's filament. To connect the DC motors to the wheels, insert them in the chassie, and use hot glue keeping in mind, you do not want to hot glue the wheel to the chassie, but only to the DC motor.


# Electronic parts list*

 - Arduino Uno  : [ebay #1] - [amazon #1]

  [ebay #1]: <https://rover.ebay.com/rover/1/709-53476-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338595969&mpre=https%3A%2F%2Fwww.ebay.fr%2Fitm%2FCarte-ORIGINALE-UNO-R3-ARDUINO-support-UNO-R3-ARDU%2F282003193235%3Fhash%3Ditem41a8b33d93%3Ag%3AtbkAAOSw7KJXDjz9>
  [amazon #1]: <https://amzn.to/2O0OeWM>

  - L293D Motor Drive Shield : [ebay #2] - [amazon #2]

  [ebay #2]: <https://rover.ebay.com/rover/1/709-53476-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338595969&mpre=https%3A%2F%2Fwww.ebay.fr%2Fitm%2FL293D-Motor-Drive-Shield-Expansion-Board-For-Arduino-Duemilanove-Mega2560-UNO%2F173406697875%3Fhash%3Ditem285fd83993%3Ag%3AXwkAAOSwIrVbRrUQ>
  [amazon #2]: <https://amzn.to/2LxfSZZ>

  - 2x DC 6V Mini (150RPM)  : [ebay #3] - [amazon #3]

  [ebay #3]: <https://rover.ebay.com/rover/1/709-53476-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338595969&mpre=https%3A%2F%2Fwww.ebay.fr%2Fitm%2FDC-6V-Mini-Motoreducteur-VITESSE-Reduction-Moteur-electrique-50-100-150-200%2F273891903725%3Fhash%3Ditem3fc53ac8ed%3Am%3Am48Bv2ogDAaOwZUrjcSVr7A>
  [amazon #3]: <https://amzn.to/32EjH5a>

  - 9V battery : [ebay #4] - [amazon #4]

  [ebay #4]: <https://rover.ebay.com/rover/1/709-53476-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338595969&mpre=https%3A%2F%2Fwww.ebay.fr%2Fitm%2FPile-9v-Energizer-6F22-6LR61-9-volts-alcaline-lot-de-2-piles-MN1604-Industrial%2F303120769224%3Fhash%3Ditem469367e0c8%3Ag%3AcTUAAOSwk1hcq5AG>
  [amazon #4]: <https://amzn.to/2NYCOTk>

  - 9V battery connector: [ebay #5] - [amazon #5]

  [ebay #5]: <https://rover.ebay.com/rover/1/709-53476-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338595969&mpre=https%3A%2F%2Fwww.ebay.fr%2Fitm%2FConnecteur-piles-9-volts-9V-Battery-Snap-on-Connector-Clip-with-Wire-Holder%2F263047972777%3Fhash%3Ditem3d3ee187a9%3Am%3Amk3poFyLraDlZk5gRinjTdw>
  [amazon #5]: <https://amzn.to/2O1QYDu>

   - Female to Female Dupont jump wires: [ebay #6] - [amazon #6]

  [ebay #6]: <https://rover.ebay.com/rover/1/709-53476-19255-0/1?icep_id=114&ipn=icep&toolid=20004&campid=5338595969&mpre=https%3A%2F%2Fwww.ebay.fr%2Fitm%2F40pcs-Dupont-Jump-Wire-M-F-M-M-F-F-Jumper-Breadboard-Cable-Lead-For-Arduino-UK%2F113798126900%3Fhash%3Ditem1a7ee59d34%3Am%3AmVonVpMq_9-RRmE6R2KKnFQ>
  [amazon #6]: <https://amzn.to/2O2ySB4>



# CREDIT where credit is due

  - This project is a light modification of the [SMARS modular robot] by [tristomietitoredeituit]. The only modification is the code and the added written instructions.


   [tristomietitoredeituit]: <https://www.thingiverse.com/tristomietitoredeituit/about>

   [SMARS modular robot]: <https://www.thingiverse.com/thing:2662828/attribution_is_important>
   [Arduino Uno]: <https://store.arduino.cc/arduino-uno-rev3>
   [Arduino IDE]: <https://www.arduino.cc/en/Main/Software>
   [Ultrasonic Library]: <https://github.com/ErickSimoes/Ultrasonic>
   [Erick Simões]: <https://github.com/ErickSimoes>

*affleliated links.
