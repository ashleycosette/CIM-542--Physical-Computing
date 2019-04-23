 #include <Servo.h>

int switchPin = 2;
//int led1 = 3;
//int led2 = 4;

int switchRead = 0;
 
int counter = 0;

boolean wasPressed = false; 

long prevMillis = 0;
int interval = 0;
boolean trigger = false;

int pos = 0;    // variable to store the servo position


Servo servo1;
Servo servo2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
//  pinMode(led1, OUTPUT);
//  pinMode(led2, OUTPUT);
  servo1.attach(3);
  

//understanding the movement
//  servo1.write(0);
//  delay(1000);


 
}

void loop() {

  servo1.write(130);
  delay(5000);
  servo1.write(50);
  delay(5000);
//  // put your main code here, to run repeatedly:
//  switchRead = digitalRead(switchPin);
//  Serial.print("switch: ");
//  Serial.print(switchRead);
//  //digitalWrite(led1, HIGH);
//  //digitalWrite(led2, HIGH);
//
//  if (switchRead == HIGH) {
//    wasPressed = true;
//  }
//
//  if (switchRead == LOW && wasPressed == true) {
//   // resetting the press
//    wasPressed = false;
//    //action
//    counter = counter + 1;
//  }
//
//  Serial.print(" counter: ");
//  Serial.println(counter);
//
//  if (counter == 0) {
//    //servo1.write(0);
//     //   delay(1000);                       // waits 15ms for the servo to reach the position
//
//     for (pos = 0; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    servo1.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//
//    //servo2.write(0);
//    //servo2 write 180
//   //open servo
//
//  } else if (counter == 1) {
//    servo1.write(0);
//    //servo2.write(170);
//     //close
//  } else if (counter == 2) {
//    //reset back to 0
//    counter = 0;
//    
//  }

}
