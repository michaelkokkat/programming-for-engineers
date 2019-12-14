# Gesture-Controlled Drone
## Abhay Menon, Michael Leo Kokkat, Harry Jang


### Project Summary
This project aims to attain control over a Parrot Rolling Spider minidrone with an infrared LEAP motion capture sensor, which will monitor the motion of the controller’s hand and command the drone to move accordingly.

We seek to coordinate the motion and velocity of the drone with that of the controller’s hand, in all 6 degrees of freedom (translation along x, y, z axes, as well as rotational and flipping maneuvers around these axes).

### Instructions
Our program requires these dependency packages:
  * Leap Motion Developer SDK (along with Desktop Setup of the Leap Motion Sensor)
  * pyparrot (Python Interface for Parrot Drones)
  * Bluetooth connectivity and interfacing packages

We have included all the necessary libraries in this folder, but the packages for bluetooth connectivity will have to be installed separately. A file containing the instructions for doing so can be found [here](http://s000.tinyupload.com/index.php?file_id=15864374397876658484)

Additionally, the Leap Motion Sensor's Desktop Setup will have to be installed separately. The Setup can be found [here](https://www.leapmotion.com/setup/desktop/linux/)

Once you have installed the setup, connect the Leap Motion Sensor to your computer using the USB cable provided. 

Now open a Terminal window and run "sudo leapd --run" in order to start the Leap Motion daemon and turn on the sensor.

This terminal **must** remain open and running while you use the sensor.

Now, insert a fully charged battery into the drone and turn it on.

Once the drone's lights turn green




documentation
instructions
problems
challenges
done differently
 
