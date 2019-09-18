#include <stdio.h>
#include <stdlib.h>

int parkingData[3][6][100];                    //Parking data for a company's buildings
                                              // 0-> no car parked, 1-> a car is in that spot


void isFull(){
  int empty_spots = 0;
  for (int i = 0; i < 3; i++){                 // The three buildings: A, B and C
    for (int j = 0; j < 6; j++){               // Each Building has 6 parking floors
      for (int z = 0; z < 100; z++){           // Each floor has 100 parking spots
            if (parkingData[i][j][z] == 0){
              empty_spots = empty_spots +1;
            }
      }
    }
  }
  if (empty_spots > 0){
    printf("The parking is not full, there are %d parking spots open.\n", empty_spots);
  }
  else{
    printf("Unfortunately, the parking is full.\n");
    printf("%d\n", empty_spots );
  }
}



void park_unpark(){
  char action;
  char building;
  int floorNumber;
  int spotNumber;
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
  if (building == 'A' || building == 'B' || building =='C'){  //Checks Input
    break;
  }
  else{
  printf("wrong input, try again.\n");
    }
  }


  while(1){
  printf("Now enter the floor (1 to 6):");                // Which floor to park
  scanf("%d", &floorNumber);
  if (floorNumber>0 && floorNumber<7){                    //checks input
    break;
  }
  else{
  printf("wrong input, try again.\n");
  }
  }

  while(1){
  printf("What's your parking spot(1-100)? ");              // Which parking spot
  scanf("%d", &spotNumber);
  if (spotNumber>0 && spotNumber<101){
    break;
  }
  else{
  printf("wrong input, try again.\n");
  }
  }

  int building_number;

  if (building == 'A'){
    building_number = 0;
  }
  else if (building == 'B') {
    building_number = 1;
  }
  else if (building == 'C') {
    building_number = 2;
  }

  floorNumber = floorNumber -1;               ////adjusts the arguents
  spotNumber = spotNumber -1;

  if (action == 'P'){
    if (parkingData[building_number][floorNumber][spotNumber] != 0){
      printf("Error while parking your car, the space is already reserved. Try again!\n");
    }
    else{
      parkingData[building_number][floorNumber][spotNumber] = 1;
      printf("Car Parked!\n" );
    }
  }

  if (action == 'U'){
    if (parkingData[building_number][floorNumber][spotNumber] != 1){
      printf("Error while unparking your car, there is no car in that spot. Try again\n");
    }
    else{
      parkingData[building_number][floorNumber][spotNumber] = 0;
      printf("Car unparked!\n" );
    }
  }

}


void showOpenSpots(){
  for (int i = 0; i < 3; i++){
      if (i == 0) {
        printf("Building A: ");
      }
      else if (i ==1) {
        printf("Building B: ");
      }
      else if (i ==2){
        printf("Buliding C: ");
      }
    for (int j = 0; j < 6; j++){
      printf("Floor: %d Open Spots: ", j+1);
      for (int z = 0; z < 100; z++){
        if (parkingData[i][j][z] == 0){
          printf("%d", z+1);
          if(z!=99){
            printf(", ");
          }
        }
        if(z==99){
          printf("\n");
        }

      }
    }
  }

}

void showAllSpots(){
  for (int i = 0; i < 3; i++){
      if (i == 0) {
        printf("Building A: ");
      }
      else if (i ==1) {
        printf("Building B: ");
      }
      else if (i ==2){
        printf("Buliding C: ");
      }
    for (int j = 0; j < 6; j++){
      printf("Floor: %d All Spots: ", j+1);
      for (int z = 0; z < 100; z++){
        if (parkingData[i][j][z] == 0){
          printf("[%d: Open]", z+1);
        }
        else{
          printf("[%d: Reserved]", z+1);
        }
        if (z == 99){
          printf("\n");
        }

      }
    }
  }

}
