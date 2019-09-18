#include "parkingGarage.h"
#include <stdio.h>

int main() {

  int exit =1;

  //The nested loop below fills up the array with random numbers between 1 and 0:
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
    if (sel != '\n'|| selection == '\n'){               //makes sure the scanned char is not a newline char.
      selection = sel;
    }
    printf("\n");

    switch(selection) {
      case '1' :                                                  //CASE 1: Park/Unpark car
      park_unpark();
      break;

      case '2' :                                                  //CASE 2: show all open spots
      showOpenSpots();
      break;

      case '3' :                                                  //CASE 3: show all spots
      showAllSpots();
      break;

      case '4' :                                                 //CASE 4: checks if the parking is full
      isFull();
      break;

      case '5' :                                                 //CASE 5: Exit menu
      exit = 0;
      break;

      default  :                                                // Default case.
      printf("Invalid selection, try again!\n");
      printf("\n \n \n");

    }
  }
}
