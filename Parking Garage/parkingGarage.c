#include "parkingGarage.h"
#include <stdio.h>



int main() {
  char action;
  char building;
  int floorNumber;
  int spotNumber;

  while(1){
    printf("==============================================================\n");
    printf("Welcome to parkingGarage for xyz, Select one of these options:\n");
    printf("==============================================================\n");
    printf("1. Park/ Unpark your car.\n");
    printf("2. Show all open parking spots..\n");
    printf("3. Show all spots.\n");
    printf("4. Exit \n");
    printf("----------------------------------------------------------------");
    printf("Enter Selection:");
    char selection;
    selection = getchar();

    switch(selection) {
      case '1' :

      while(1){
        printf("Enter P to park and U to unpark a car\n", );
        scanf("%c", &action);
        if (action== "P"|| action == "U"){
          break;
        }
        printf("wrong input, try again.\n")
      }

      while(1){
      printf("Enter building (A,B or C):");
      scanf("%c", &building);
      if (building =="A" ||building =="B"||building =="C"){
        break;
      }
      printf("wrong input, try again.\n")
      }


      while(1){
      printf("Now enter the floor (1 to 6):");
      scanf("%d", &floorNumber);
      if (floorNumber>0 || floorNumber<7){
        break;
      }
      printf("wrong input, try again.\n")
      }

      while(1){
      printf("What's your parking spot(1-100)?");
      scanf("%d", &spotNumber);
      if (floorNumber>0 || floorNumber<101){
        break;
      }
      printf("wrong input, try again.\n")
      }

      park_unpark(action, building, floorNumber -1, spotNumber-1);
      break;

      case '2' :
      showOpenSpots();
      break;

      case '3' :
      showAllSpots();
      break;

      case '4' :
      exit();
      break;

      default  :
      printf("Invalid selection, try again!"\n);
      printf("\n \n \n");

    }


  }

}
