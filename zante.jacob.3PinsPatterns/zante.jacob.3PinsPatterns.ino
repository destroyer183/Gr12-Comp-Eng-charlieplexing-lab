/*
Student Name: Jacob Zante
Teacher Name: Hayden So
Title of Project: 3 Pins Pattern
Brief Description of Project: this circuit will have sets of multiple LEDs blink together in a set pattern.
Date of Completion: Nov 8, 2024
*/



const int controlPins[3] = {13, 12, 11}; // create array to store the arduino pins that will be used as control pins

const int delayTime = 10; // create variable to store a delay in miliseconds

const int loopCount = 50; // create variable to store the number of times that a for loop should repeat



void updatePins(int pin1, int pin2, int pin3) { // function that will set the 'pinMode' of a pin and then send a signal to it based on the value of the arguments passed in

    pinMode(controlPins[0], (OUTPUT * (pin1 != 2) + INPUT * (pin1 == 2))); // set 'controlPins[0]' to either OUTPUT or INPUT depending on the value of the argument
    pinMode(controlPins[1], (OUTPUT * (pin2 != 2) + INPUT * (pin2 == 2))); // set 'controlPins[1]' to either OUTPUT or INPUT depending on the value of the argument
    pinMode(controlPins[2], (OUTPUT * (pin3 != 2) + INPUT * (pin3 == 2))); // set 'controlPins[2]' to either OUTPUT or INPUT depending on the value of the argument

    if (pin1 != 2) { // check if 'pin1' is '2'
        digitalWrite(controlPins[0], pin1); // set 'controlPins[0]' to the value of 'pin1'
    }
    if (pin2 != 2) { // check if 'pin2' is '2'
        digitalWrite(controlPins[1], pin2); // set 'controlPins[1]' to the value of 'pin2'
    }
    if (pin3 != 2) { // check if 'pin3' is '2'
        digitalWrite(controlPins[2], pin3); // set 'controlPins[2]' to the value of 'pin3'
    }
}



void setup() { // void setup code that only runs once

}



void loop() { // void loop code that repeats indefinitely

    for (int i = 0; i < 2; i++) { // for loop to repeat this section of code twice

        for (int i = 0; i < loopCount; i++) { // turn on LED 1 and LED 2 at the same time
            updatePins(1, 0, 2); // call function and pass in arguments to turn on LED 1
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(0, 1, 2); // call function and pass in arguments to turn on LED 2
            delay(delayTime); // wait for 'delayTime' miliseconds
        }

        for (int i = 0; i < loopCount; i++) { // turn on LED 3 and LED 4 at the same time
            updatePins(2, 1, 0); // call function and pass in arguments to turn on LED 3
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(2, 0, 1); // call function and pass in arguments to turn on LED 4
            delay(delayTime); // wait for 'delayTime' miliseconds
        }

        for (int i = 0; i < loopCount; i++) { // turn on LED 5 and LED 6 at the same time
            updatePins(1, 2, 0); // call function and pass in arguments to turn on LED 5
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(0, 2, 1); // call function and pass in arguments to turn on LED 6
            delay(delayTime); // wait for 'delayTime' miliseconds
        }
    }

    for (int i = 0; i < 2; i++) { // for loop to repeat this section of code twice

        for (int i = 0; i < loopCount; i++) { // turn on LED 1, LED 3, and LED 5 at the same time
            updatePins(1, 0, 2); // call function and pass in arguments to turn on LED 1
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(2, 1, 0); // call function and pass in arguments to turn on LED 3
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(1, 2, 0); // call function and pass in arguments to turn on LED 5
            delay(delayTime); // wait for 'delayTime' miliseconds
        }

        for (int i = 0; i < loopCount; i++) { // turn on LED 2, LED 4, and LED 6 at the same time
            updatePins(0, 1, 2); // call function and pass in arguments to turn on LED 2
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(2, 0, 1); // call function and pass in arguments to turn on LED 4
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(0, 2, 1); // call function and pass in arguments to turn on LED 6
            delay(delayTime); // wait for 'delayTime' miliseconds
        }
    }

    for (int i = 0; i < 2; i++) { // for loop to repeat this section of code twice

        for (int i = 0; i < loopCount; i++) { // turn on LED 1, LED 2, and LED 3 at the same time
            updatePins(1, 0, 2); // call function and pass in arguments to turn on LED 1
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(0, 1, 2); // call function and pass in arguments to turn on LED 2
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(2, 1, 0); // call function and pass in arguments to turn on LED 3
            delay(delayTime); // wait for 'delayTime' miliseconds
        }

        for (int i = 0; i < loopCount; i++) { // turn on LED 4, LED 5, and LED 6 at the same time
            updatePins(2, 0, 1); // call function and pass in arguments to turn on LED 4
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(1, 2, 0); // call function and pass in arguments to turn on LED 5
            delay(delayTime); // wait for 'delayTime' miliseconds
            updatePins(0, 2, 1); // call function and pass in arguments to turn on LED 6
            delay(delayTime); // wait for 'delayTime' miliseconds
        }
    }
}