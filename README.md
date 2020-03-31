# Obstacle-avoider-bot
A simple obstacle avoider bot using ultrasound sensor with a threshold of 30cm. It avoids obstacles by turning left on detecting an obstacle.

####  _(Recommended)_ Specifications of the project:
* Arduino UNO
* 300 rpm geared motors
* L293D H bridge Motor Driver
* Ultrasound module

#### __Pin configuration of Arduino UNO:__
###### Digital Pins:
2 - Trig pin of ultrasound module</br>
3 - Echo pin of ultrasound module</br>
5 - right motor's pin on the motor driver 1</br>
8 - Alternate Vcc pin</br>
10 - left motor's pin on motor driver 1</br>
11 - left motor's pin on motor driver 2</br>
12 - right motor's pin on motor driver 1</br>

#### Steps:
1. Connect the motors to the motor driver and jumpers from arduino to the ultrasound module and the motor driver _(as given above)_
1. Connect the battery to the motor driver
1. Upload the [code](https://github.com/sagnik106/Obstacle-avoider-bot/blob/master/obstacleavoider.ino) on the arduino board
