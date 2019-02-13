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
  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
//  driveForDistancePID(11, 60);
//  turnRight(60);
//  delayMicroseconds(5000);
//  driveForDistancePID(48, 50);
driveForDistancePID(6, 60);
turnRight(60);
delayMicroseconds(20000);
driveForDistancePID(48, 60);
driveForDistancePID(48,-60);
turnLeft(60);
delayMicroseconds(20000);
driveForDistancePID(46, 60);
turnRight(60);
delayMicroseconds(20000);
driveForDistancePID(46, 60);   // After turn drive a bit more forward
//  driveForDistancePID(1100, 60);     // for 10 meter = 394" at speed 60
//  pivotTurn(0, 30, 90);            // turn at seed 30 for 90 degree angle right turn
//  driveForDistancePID(480, 50);     // After turn drive a bit more forward
//  driveForDistancePID(480,-50);
//  pivotTurn(1, 30, 90);
//  driveForDistancePID(460, 50);
//  pivotTurn(0, 30, 90);
//  driveForDistancePID(480, 50);

}

void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
