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
        parkingData[i][j][z] = rand() % 2;     // use of stdlib's rand function to assign
                                               // a random value between 0 and 1
      }
    }
  }

  while(exit){
    printf("\n \n \n \n \n \n \n \n \n \n");
    printf("======================================================================\n");
    printf("Welcome to parkingGarage for xyz company, Select one of these options:\n");
    printf("======================================================================\n");
    printf("1. Park/ Unpark your car.\n");
    printf("2. Show all open parking spots..\n");
    printf("3. Show all spots.\n");
    printf("4. Is parking full?\n");
    printf("5. Exit \n");
    printf("----------------------------------------------------------------------\n");
    printf("Enter Selection:");
    char selection;
    selection = getchar();
    char sel = getchar();
    if (sel != '\n'|| selection == '\n'){
      selection = sel;
    }
    printf("\n");

    switch(selection) {
      case '1' :                                              //CASE 1: Park/Unpark car

      while(1){
        printf("Enter P to park and U to unpark a car: ");     // Asks if you want to park or unpark.
        scanf("%c", &action);
        if (action == '\n'){
        action = getchar();
        }
        else{
          getchar();
        }
        if ( (action == 'P')||(action == 'U') ){       //Checks input
          break;
        }
        else{
        printf("wrong input, try again.\n");
      }
      }

      while(1){                                           // Which building to park in
      printf("Enter building (A,B or C): ");
      scanf("%c", &building);
      if (building == '\n'){
      building = getchar();
      }
      else{
        getchar();
      }
      if (building == 'A' || building == 'B' || building =='C'){
        break;
      }
      else{
      printf("wrong input, try again.\n");
        }
      }


      while(1){
      printf("Now enter the floor (1 to 6):");                // Which floor to park
      scanf("%d", &floorNumber);
      if (floorNumber>0 || floorNumber<7){
        break;
      }
      else{
      printf("wrong input, try again.\n");
      }
      }

      while(1){
      printf("What's your parking spot(1-100)? ");              // Which parking spot
      scanf("%d", &spotNumber);
      if (floorNumber>0 || floorNumber<101){
        break;
      }
      else{
      printf("wrong input, try again.\n");
      }
      }

      park_unpark(action, building, floorNumber -1, spotNumber-1);  //calls the function with the arguments.
      break;

      case '2' :                                                  //CASE 2: show all open spots
      showOpenSpots();
      break;

      case '3' :                                                  //CASE 3: show all spots
      showAllSpots();
      break;

      case '4' :                                                //CASE 4: checks if the parking is full
      isFull();
      break;

      case '5' :                                                //CASE 5: Exit menu
      exit = 0;
      break;

      default  :
      printf("Invalid selection, try again!\n");
      printf("\n \n \n");

    }


  }

}
