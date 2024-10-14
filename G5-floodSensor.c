/* Flood Sensor Alert Exercise
 * GroupName:
 * Section:
*/

#include "floodSensor.h"
/*
* (Question 1 - getSensorValues) [3pts]
* To Do: Implement the showWord function based on the following specs 
*
* This function prompts the user to enter sensor values per location
*
* Pre-condition: all input are integer numbers from zero(0) to seven(7)
*
* @param *nLoc1Val - Memory Address of Sensor Value for site location 1 
* @param *nLoc2Val - Memory Address of Sensor Value for site location 2 
* @param *nLoc3Val - Memory Address of Sensor Value for site location 3 
* @param *nLoc4Val - Memory Address of Sensor Value for site location 4 
*
*/
//
//
// **************************************************
   void getSensorValues(int* nLoc1Val,int* nLoc2Val,int* Loc3nVal,int* Loc4nVal)
   {
    printf("Input the Sensor Value for Vito Cruz: ");
    scanf("%d", nLoc1Val);
    
    printf("\nInput the Sensor Value for Quirino Ave.: ");
    scanf("%d", nLoc2Val);
    
    printf("\nInput the Sensor Value for U.N. Ave.: ");
    scanf("%d", Loc3nVal);
    
    printf("\nInput the Sensor Value for Pedro Gil: ");
    scanf("%d", Loc4nVal);
   }
// **************************************************
//
//


/*
* (Question 2 - displayHeader) [3pts]
* To Do: Implement the function based on the following specs 
*
* 
* Display the output header according to the specification and 
* sample outut format
*
*
* Pre-condition: none
*
*/
//
//
// ******************************************************
   void displayHeader()
   {
        printf("%11s %11s %7s\n", "Location", "Sensor", "Visual");
        printf("%12s %9s %8s\n", "along Taft", "Value", "Alert");
        printf("%14s %8s %7s\n", "--------------", "-------", "------");
   }
// ******************************************************
//
//


/*
* (Question - 3 displayDetails ) [5pts]
* To Do: Implement the function based on the following specs 
*
* Display the line item details according to the specification
* and sample format
*
*
* Pre-condition: all values are integers from 0 to 7
*
* @param nLoc1Val - The sensor reading values on site location 1
* @param nLoc2Val - The sensor reading values on site location 2
* @param nLoc3Val - The sensor reading values on site location 3
* @param nLoc4Val - The sensor reading values on site location 4
*/
//
//
// ******************************************************
   void displayDetails(int nLoc1Val,int nLoc2Val,int Loc3nVal,int Loc4nVal)
   {
        printf("%14s %5d %6d%d%d\n", LOC1, nLoc1Val, isRedLightOn(nLoc1Val), isYellowLightOn(nLoc1Val), isGreenLightOn(nLoc1Val));
        printf("%14s %5d %6d%d%d\n", LOC2, nLoc2Val, isRedLightOn(nLoc2Val), isYellowLightOn(nLoc2Val), isGreenLightOn(nLoc2Val));
        printf("%14s %5d %6d%d%d\n", LOC3, Loc3nVal, isRedLightOn(Loc3nVal), isYellowLightOn(Loc3nVal), isGreenLightOn(Loc3nVal));
        printf("%14s %5d %6d%d%d\n", LOC4, Loc4nVal, isRedLightOn(Loc4nVal), isYellowLightOn(Loc4nVal), isGreenLightOn(Loc4nVal));
   }
// ******************************************************
//
//


/*
* (Question - 4 isGreenLightOn ) [2pts]
* To Do: Implement the function based on the following specs 
*
* Determines is the Green Light is ON or OFF based of the given
* sensor value. ON trnaslates to one(1), while OFF is zero(0)
*
* Refer to the sensor value table in the specification
*
* Pre-condition: all values are integers from 0 to 7
* @param nSensorVal - The sensor reading values
* @return - 1 if OFF; 0 if ON
* */
//
//
// ******************************************************
   int isGreenLightOn(int nSensorVal)
   {
       return (nSensorVal%2);
   }
// ******************************************************
//
//


/*
* (Question - 5  isYellowLightOn ) [2pts]
* To Do: Implement the function based on the following specs 
*
* Determines is the Yellow Light is ON or OFF based of the given
* sensor value. ON trnaslates to one(1), while OFF is zero(0)
*
* Refer to the sensor value table in the specification
*
* Pre-condition: all values are integers from 0 to 7
* @param nSensorVal - The sensor reading values
* @return - 1 if OFF; 0 if ON
* */
//
//
// ******************************************************
   int isYellowLightOn(int nSensorVal)
   {
       return (nSensorVal/2)%2;
   }
// ******************************************************
//
//


/*
* (Question - 6  isRedLightOn ) [2pts]
* To Do: Implement the function based on the following specs 
*
* Determines is the Yellow Light is ON or OFF based of the given
* sensor value. ON trnaslates to one(1), while OFF is zero(0)
*
* Refer to the sensor value table in the specification
*
* Pre-condition: all values are integers from 0 to 7
* @param nSensorVal - The sensor reading values
* @return - 1 if OFF; 0 if ON
* */
//
//
// ******************************************************
   int isRedLightOn(int nSensorVal)
   {
       return (nSensorVal/4)%2;
   }
// ******************************************************
//
//


/*
* (Question - 7 displayFooter ) [3pts]
* To Do: Implement the function based on the following specs 
*
* Display the footer details according to the specification
* and sample format
*
*
* Pre-condition: all values are integers from 0 to 7
*
* @param nLoc1Val - The sensor reading values on site location 1
* @param nLoc2Val - The sensor reading values on site location 2
* @param nLoc3Val - The sensor reading values on site location 3
* @param nLoc4Val - The sensor reading values on site location 4
*/
//
//
// ******************************************************
void displayFooter(int nLoc1Val,int nLoc2Val,int Loc3nVal,int Loc4nVal)
{
   float fTotal = nLoc1Val + nLoc2Val + Loc3nVal + Loc4nVal;
   float fAve = (nLoc1Val + nLoc2Val + Loc3nVal + Loc4nVal)/4.00;
   printf("%23s\n", "-------");
   printf("%14s %s %.2f\n", "Total"," ", fTotal);
   printf("%14s %s %.2f", "Average", "  ", fAve);
}
// ******************************************************
