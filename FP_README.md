# Gesture-Controlled Drone
## Abhay Menon, Michael Leo Kokkat, Harry Jang


### Project Summary
This project aims to attain control over a Parrot Rolling Spider minidrone with an infrared LEAP motion capture sensor, which will monitor the motion of the controller’s hand and command the drone to move accordingly.

We seek to coordinate the motion and velocity of the drone with that of the controller’s hand, in all 6 degrees of freedom (translation along x, y, z axes, as well as rotational and flipping maneuvers around these axes).

For a more detailed documentation of the project's concept and purpose, refer to the "Final Project Report.pdf" file in this folder.

### Instructions
Our program requires these dependency packages:
  * Leap Motion Developer SDK (along with Desktop Setup of the Leap Motion Sensor)
  * pyparrot (Python Interface for Parrot Drones)
  * Bluetooth connectivity and interfacing packages

We have included all the necessary libraries in this folder, but the packages for bluetooth connectivity will have to be installed separately. A file containing the instructions for doing so can be found [here](http://s000.tinyupload.com/index.php?file_id=15864374397876658484). 

Ensure that you follow the instructions to find your drone's MAC address, and take note of it. In this folder, find the file called "motionCaptureFlight.py" and enter the MAC address of your drone in the assignment of the "mamboAddr" variable on line 13.

Additionally, the Leap Motion Sensor's Desktop Setup will have to be installed separately. The Setup can be found [here](https://www.leapmotion.com/setup/desktop/linux/)

Once you have installed the setup, connect the Leap Motion Sensor to your computer using the USB cable provided. 

Now open a Terminal window and run "sudo leapd --run" in order to start the Leap Motion daemon and turn on the sensor.

This terminal **must** remain open and running while you use the sensor.

Now, insert a fully charged battery into the drone and turn it on.

Once the drone's lights turn green, open a new Terminal window and navigate to this folder.

Now, run "python3 motionCaptureFlight.py"

The program will print "Initialized" once the drone is ready to receive commands.

You can control the drone using the following motions:
 * *Making a circle with index finger:* **Takeoff/Landing**
 * *Moving palm up/down/left/right/forwards/backwards:* **Translational Motion in the given direction**
 * *Yawing palm:* **Turns drone left/right**
 * *Pitching/Rolling palm:* **Flips drone in given direction**

For a more detailed documentation of the control instructions, refer to the "Final Project Report.pdf" file in this folder.
 
Enjoy!
 
### Problems & Challenges
We encountered several issues during the course of the project, which we overcame through meticulous research and pestering the monitors at the Unix Lab. A few of the key *problems* we faced include:

 * The drone remaining endlessly stuck on the first maneuver in the code it encountered despite the conditions no longer being satisfied (resolved by code revision)
 * The drone’s unwillingness to come down after takeoff during some spotty code implementations, resulting in many cut fingers (resolved by code revision & gloves)
 * The sensor refusing to calculate and print certain values due to faulty class definition (resolved by code revision)
 * Unreliable hovering in even slightly windy conditions, causing drift and subsequent chasing down of drone (resolved by indoor operation)
 * Loosening and midair separation of propeller blades due to frequent collision with fingers (resolved by blade replacement)
 
A few of the *challenges* we faced with the implementation of the project concept are given below:

 * Translating the logic we learnt in one language and directly applying it to another (Python)
   * Learning how to use libraries, modules and classes in Python
   * Learning how to put together different systems to work in conjunction
 * Infrastructure behind Bluetooth connectivity
 * Understanding of sensor capabilities and limitations
 * Resolving incompatibilities in programming language (Python2 & Python3)
 * Gain familiarity with use of Terminal
 
For a more detailed documentation of the challenges we encountered, refer to the "Final Project Report.pdf" file in this folder.

### In Hindsight
If we were able to redo the project from the start with the knowledge we now possess, we would make the following changes:
 * START EARLIER
 * 

 
