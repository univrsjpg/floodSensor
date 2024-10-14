#include "G5-floodSensor.c" // replace with the corresponding <GroupName>-floodsensor.c

int
main() {

   int nLoc1Val = 0;
   int nLoc2Val = 0;
   int nLoc3Val = 0;
   int nLoc4Val = 0;

  getSensorValues(&nLoc1Val, &nLoc2Val, &nLoc3Val, &nLoc4Val);
  displayHeader();
  displayDetails(nLoc1Val, nLoc2Val, nLoc3Val, nLoc4Val);
  displayFooter(nLoc1Val, nLoc2Val, nLoc3Val, nLoc4Val);

  return 0;
}
