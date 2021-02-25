#include "DriveSystem.h"
//Motor Connections
#define EnA 10
#define EnB 5
#define In1 9
#define In2 8
#define In3 7
#define In4 6
 
L298N_Motor Right = L298N_Motor(EnA, In1, In2);
L298N_Motor Left = L298N_Motor(EnB, In3, In4);
DriveSystem drive = DriveSystem(Right, Left);

void setup()
{
    // Nothing here
    // all of it is done in DriveSystem.cpp
}

void loop()
{
    drive.drive(7,7,7); // function hasn't been implemented yet so it's probably not going to work right now 
    delay(1000);
}
