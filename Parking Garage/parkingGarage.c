#include "parkingGarage.h"
#include <stdio.h>

int main() {
  char action;
  char building;
  int floorNumber;
  int spotNumber;
  int exit =1;
  for (int i = 0; i < 3; i++){                 // The three buildings: A, B and C
    for (int j = 0; j < 6; j++){               // Each Building has 6 parking floors
      for (int z = 0; z < 100; z++){           // Each floor has 100 parking spots
        parkingData[i][j][z] = rand() % 1;     // use of stdlib's rand function to assign
                                               // a random value between 0 and 1
      }
    }
  }

  while(exit){
    printf("==============================================================\n");
    printf("Welcome to parkingGarage for xyz, Select one of these options:\n");
    printf("==============================================================\n");
    printf("1. Park/ Unpark your car.\n");
    printf("2. Show all open parking spots..\n");
    printf("3. Show all spots.\n");
    printf("4. Exit \n");
    printf("----------------------------------------------------------------\n");
    printf("Enter Selection:");
    char selection;
    selection = getchar();

    switch(selection) {
      case '1' :

      while(1){
        printf("Enter P to park and U to unpark a car\n");
        scanf("%c", &action);
        if (action== "P"|| action == "U"){
          break;
        }
        else{
        printf("wrong input, try again.\n");
      }
      }

      while(1){
      printf("Enter building (A,B or C):");
      scanf("%c", &building);
      if (building =="A" ||building =="B"||building =="C"){
        break;
      }
      else{
      printf("wrong input, try again.\n");
        }
      }


      while(1){
      printf("Now enter the floor (1 to 6):");
      scanf("%d", &floorNumber);
      if (floorNumber>0 || floorNumber<7){
        break;
      }
      else{
      printf("wrong input, try again.\n");
      }
      }

      while(1){
      printf("What's your parking spot(1-100)?");
      scanf("%d", &spotNumber);
      if (floorNumber>0 || floorNumber<101){
        break;
      }
      else{
      printf("wrong input, try again.\n");
      }
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
      exit = 0;
      break;

      default  :
      printf("Invalid selection, try again!\n");
      printf("\n \n \n");

    }


  }

}
