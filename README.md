Abstract
This project is a pioneering attempt at the development of an innovative prosthetic limb. The prosthetic arm comprises an Arduino Nano microprocessor, three servo motors, and a pressure sensor. The major goal of this technique is to create an economically workable and smoothly functional prosthetic limb. Also, it focuses on intuitive user control. The addition of a pressure sensor allows the prosthetic arm to respond dynamically to the different pressure levels exerted by the user. The Arduino Nano orchestrates a symphony of motor motions and sensor input with grace and efficiency. The prosthetic arm is programmed to perform essential functions such as subtle grasping and calibrated item release. It goes beyond traditional expectations, providing versatility for a wide range of daily chores. The project's special attractiveness stems from its prudent utilization of the Arduino platform's cost-effective and open-source qualities, assuring not just accessibility but also setting the framework for potential future modifications and expansions. The 3D printed arm is exactly like a real arm and it is controlled by the Arduino Nano. And it takes the signal from the force sensor used by the user and fetches the data to the servo motor accordingly to grab or release any object. It delivers precision that dramatically improves the user experience. The servo motors are connected, one for the index finger, another one for the thumb and the last one controls middle, index and the little finger. This initiative advances the conversation by proposing a unique blueprint for inexpensive, personalized prostheses that reinvent the possibilities for people with limb differences, ushering in an age of heightened independence and fuller lives.
 
 
1. Introduction and Theoretical Background
Prosthetics has made amazing advances in recent years, propelled by technical developments and a rising dedication to improving the quality of life for people with limb differences. Our research is in the front of this transformational wave, presenting a ground-breaking attempt to create a new prosthetic limb that blends cutting-edge technology with affordability and easy user control. This introduction gives a quick outline of our project's history, approach, and future possibilities.
1.1 Background
The need to address the limitations of traditional prosthetic limbs has motivated the pursuit of prosthetic advances. Existing solutions provide functional assistance, but they frequently fall short in terms of variety, usability, and cost-effectiveness. Our project seeks to fill these gaps by combining the capabilities of the Arduino Nano microprocessor, servo motors, and a pressure sensor to produce a prosthetic arm that is not only economically practical but also intuitively responsive to human demands.
The use of an Arduino Nano microcontroller as the primary control unit allows for the seamless orchestration of motor motions and sensor inputs, opening the way for a prosthetic limb that exceeds expectations. The addition of a pressure sensor adds a dynamic aspect to user engagement, allowing the prosthetic arm to adapt fluidly to the user's fluctuating pressure levels. This responsiveness is an important step in achieving natural and nuanced motions, which improves the entire user experience.
1.2 Methodology
Our process entails precise component integration, with each portion having a specific purpose in the overall operation of the prosthetic limb. The physical basis for the project is a 3D-printed arm that is meant to closely resemble the anatomy of a human arm. As the system's brain, the Arduino Nano takes center stage, coordinating the operations of three servo motors that control the fingers.
A crucial novelty in our technique is the force sensor, which serves as a link between the user and the prosthetic arm. The force sensor, by collecting and interpreting the user's pressure, permits real-time modifications in the servo motors' motions, allowing for delicate grabbing and calibrated object release. This technique not only provides precision in motor control but also improves the prosthetic limb's adaptability to a wide variety of daily chores.



2. Project Design
2.1 Component List
Component Name	No of Components	Purpose
Arduino Nano	01	The brain of the project or the microprocessor
Servo Sensor	03	For operating the fingers
Force Sensor	01	Users will interact with the sensor in order to operate the fingers
Buck Converter	01	Suppling power to the servo motors and processor
Wires	Few	Connecting the sensors, Microcontroller and the other components
Table 2.1:Component List
2.2 Circuit Diagram
 ![image](https://github.com/shakauthossain/Prosthetic-Arm/assets/75905534/94ae1040-4221-4966-977f-12689af75985)

Figure 2.1: Circuit Diagram
In this diagram, the red wires are the positive or the +5V connections where black are the negative connections and the yellow wires are the signal connections. 
The connection of the VCC wire of the servo motors and the sensor will be connected to the 5v of the Arduino Nano and the GND will be connected to the GND of Arduino Nano. Rest of the connections are given below in the table;

Microcontroller (Arduino Nano)	Sensor/Component
D2	Servo 01 – Signal
D4	Servo 02 - Signal
D6	Servo 03 - Signal
A0	Force Sensor Signal

Table 2.2:Wire Connection
2.3 Flowchart
![image](https://github.com/shakauthossain/Prosthetic-Arm/assets/75905534/90088a9a-0369-4c0c-b771-4640099caacd)

 



2.4 Pseudocode
 
 // Include the Servo library
 Include <Servo.h>
 
 // Define Servo objects for each finger
 Servo thumbServo;
 Servo indexServo;
 Servo littleServo;
 
 // Define pin for the force sensor
 Constant int forceSensorPin = A0;
 
 // Variable to store force value
 Integer forceValue;
 
 Setup:
   // Attach servo motors to corresponding pins
   thumbServo.attach(2);
   indexServo.attach(4);
   littleServo.attach(6);
 
   // Start serial communication for debugging
   Serial.begin(9600);
 
 Loop:
   // Read force value from the force sensor
   forceValue = analogRead(forceSensorPin);
 
   // Map force value to servo angles for each finger
   Integer thumbAngle = map(forceValue, 0, 1023, 0, 90);
   Integer indexAngle = map(forceValue, 0, 1023, 0, 120);
   Integer littleAngle = map(forceValue, 0, 1023, 0, 70);
 
   // Move the servo motors based on the mapped angles
   thumbServo.write(thumbAngle);
   indexServo.write(indexAngle);
   littleServo.write(littleAngle);
 
   // Display force value for debugging
   Serial.print("Force Value: ");
   Serial.println(forceValue);
 
   // Add a delay for stability (if needed)
   delay();

3. Expected Results
The prosthetic hand is designed for a physically impaired person, who is needed of a hand. The expectation of this project is to make a person able to work as a regular person even if he is impaired. In this project, I am able to complete and meet my expectations. The sensor can easily take data and divert it in to servo motor to the hand fingers using the microcontroller, Arduino Nano. The servo motors are rotating according to the force which is taken from the force sensor. There are some images given below;
![image](https://github.com/shakauthossain/Prosthetic-Arm/assets/75905534/2c406a40-352c-4f47-bece-8be84bea9fe8)

 
Figure 3.1: Servo Operation
 ![image](https://github.com/shakauthossain/Prosthetic-Arm/assets/75905534/ec4d3680-bf4c-4fbe-8237-9ac50dfaba2c)

Figure 3.2: Upper View
 ![image](https://github.com/shakauthossain/Prosthetic-Arm/assets/75905534/4313b320-d407-4d1d-bacf-1b15a0dae74a)

Figure 3.3: Final Project
 
4. Conclusion
This project is a significant advancement in prosthetics, introducing a cost-effective, user-controlled prosthetic arm that addresses the limitations of traditional prosthetics. The Arduino Nano microprocessor, servo motors, and a pressure sensor are combined to create a prosthetic arm that not only performs essential functions but also adapts dynamically to the user's varying pressure levels. The 3D-printed arm adds realism and enhances the user experience. The Arduino Nano acts as the brain, orchestrating the servo motors and force sensor, providing real-time adjustments in motor motions. The project design section presents a comprehensive component list, circuit diagram and flowchart, providing a clear blueprint of the system's architecture.

The successful implementation of the prosthetic hand aims to empower physically impaired individuals and enable them to perform daily tasks with increased independence. This project contributes to personalized and affordable solutions by utilizing the Arduino platform's cost-effective and open-source nature, ensuring accessibility and laying the groundwork for future modifications and expansions. The images showcasing the completed project demonstrate its successful realization and potential impact on the lives of those with limb differences.

5.1 Future Scope
The future of prosthetic hand research is bright and full of potential. Here are a few important areas where considerable progress is expected:
•	More degrees of freedom (DOF): Current prostheses sometimes lack the delicate motor control and flexibility of native hands. Multi-articulated finger research, adaptive mechanisms, and enhanced wrist mobility will lead to prostheses with higher accuracy and elegance in grasping and manipulating items.
•	Non-invasive and user-friendly control interfaces: While EMG (electromyography) technology is continually developing, researchers are looking at other control techniques such as brain-computer interfaces (BCIs) for more seamless integration.
•	Advanced rehabilitation techniques: Robotics and virtual reality might be combined to create more effective training regimens, allowing users to regain confidence and control over their prostheses.
