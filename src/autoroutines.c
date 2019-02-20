// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"

void compAutoRedRight(){

driveForDistancePID(12, 60);
pivotTurn(0, 50, 80);
driveForDistancePID(3,60);
liftMove(50);
delay(1500);
liftMove(0);
liftMove(-75);
delay(1520);
liftMove(0);

//driveForDistancePID(3,60);
//liftMoveAngle(50, 60);
//driveForDistancePID(8,60);
//liftMoveAngle(50, -180);
//driveForDistancePID(3, 60);
//liftMoveAngle(50, 120);
//driveForDistancePID(3,60);
//liftMoveAngle(50, 60);
//driveForDistancePID(8,60);
//liftMoveAngle(50, -180);


  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.

//pivotTurn(0, 50, 80);
//driveForDistancePID(39, 60);
//driveForDistancePID(-39,60);
//pivotTurn(1,50,50);
//driveForDistancePID(43,60);
//pivotTurn(0,50,80);
//driveForDistancePID(39,60);
//driveForDistancePID(-39,60);
//pivotTurn(1,50,50);
//driveForDistancePID(46,60);
//pivotTurn(0,50,80);
//driveForDistancePID(36,60);
//driveForDistancePID(-36,60);


 // After turn drive a bit more forward
     // for 10 meter = 394" at speed 60
         // turn at seed 30 for 90 degree angle right turn
     // After turn drive a bit more forward


}

void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
