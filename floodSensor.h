/*
* This file should not be edited.
* This file will not be submitted.
*/
#include <stdio.h>

#define LOC1 "Vito Cruz"
#define LOC2 "Quirino Ave"
#define LOC3 "U.N. Ave"
#define LOC4 "Pedro Gil"

void getSensorValues(int* nLoc1Val,int* nLoc2Val,int* Loc3nVal,int* Loc4nVal);
void displayHeader();
void displayDetails(int nLoc1Val,int nLoc2Val,int Loc3nVal,int Loc4nVal);
int isGreenLightOn(int nSensorVal);
int isYellowLightOn(int nSensorVal);
int isRedLightOn(int nSensorVal);
void displayFooter(int nLoc1Val,int nLoc2Val,int Loc3nVal,int Loc4nVal);

