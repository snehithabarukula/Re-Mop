# Re-Mop
# Introduction 
Engineers create goods and offer services that improve our quality of life. When we wake up each day, we can observe the surroundings to discover how engineers improve the comfort and quality of our daily life. Re-mop is a protype of an automated mop to reduce the physical strain a person has to invest in order to mop a home. It is implemented with ultrasonic range sensor that detects the obstacles. Remop works with a hardwired remote control while maximizing the time efficiency.
 
# Table of Contents
1) Technologies Used
2) System Requirements
3) Set-up
4) Project Flow 

# Technologies Used 
Remop is built using IoT technology and components like Arduino Uno, Ultrasonic Range Sensor, LED's.

# System Requirements
1) The system should have lastest version of Ardunio IDE. 

# Set Up
How to set up Ardunio Uno?

- Navigate through the link [Ardunio IDE](https://www.arduino.cc/en/software)
- Download and Install the latest version
- Create a project
- Connect your circuit and plug in the ardunio to run the model.
           
## Project Flow 
Re-mop is an automated model and hence works when the stimulation is trigerred in the IDE. An ultrasonic sensor uses ultrasonic sound waves to detect a target object's distance and then turns the sound that is reflected back into an electrical signal. The speed of audible sound is greater than the speed of ultrasonic waves (the sound that is audible to humans). 

The transmitter (which generates sound using piezoelectric crystals) and the receiver are the two major parts of an ultrasonic sensor (which catches the sound after it has travelled to and from the target). The sensor monitors the amount of time that passes between the transmitter's sound emission and its contact with the receiver in order to determine the distance between the item and the sensor. D = 1/2 T x C ( D = distance, T= time, and C = sound speed of 343 metres per second) is the formula for this computation. For instance, if you place an ultrasonic sensor at a box and waited 0.030 seconds for the sound to return, the distance between the object would be as follows:

                                                D = 0.5 x 0.030 x 343
The LED glows when the objects is detected and beeps a sound. The water dispensing mechanism is attached at the top of the mop, which dispenses water periodically and the mop underneath is attached to motors. The motor rotates the circular disks and cleans the floor. 

## Future Implementations
1) The model shall be integrated with AI and bluetooth in further stages to increase the ease the user interacttion and provide better working of the model using the latest technology.



