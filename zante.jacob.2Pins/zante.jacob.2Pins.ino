/*
Student Name: Jacob Zante
Teacher Name: Hayden So
Title of Project: 2 Pins
Brief Description of Project: this circuit will have two LEDs that blink back and forth.
Date of Completion:  Nov 8, 2024
*/



const int controlPin1 = 13; // create variable to store the arduino pin that will be used as the first control pin
const int controlPin2 = 12; // create variable to store the arduino pin that will be used as the second control pin

int delayTime = 500; // create variable to store a delay in miliseconds



void setup() { // void setup code that only runs once

    pinMode(controlPin1, OUTPUT); // initialize 'controlPin1' as an output pin
    pinMode(controlPin2, OUTPUT); // initialize 'controlPin2' as an output pin

}



void loop() { // void loop code that repeats indefinitely

    digitalWrite(controlPin1, HIGH); // send 'HIGH' signal to 'controlPin1'
    digitalWrite(controlPin2, LOW); // send 'LOW' signal to 'controlPin2'

    delay(delayTime); // wait for 'delayTime' miliseconds

    digitalWrite(controlPin1, LOW); // send 'LOW' signal to 'controlPin1'
    digitalWrite(controlPin2, HIGH); // send 'HIGH' signal to 'controlPin2'

    delay(delayTime); // wait for 'delayTime' miliseconds

}