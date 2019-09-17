#include <stdio.h>
#include <stdlib.h>

int parkingData[3][6][100];                    //Parking data for a company's buildings
                                              // 0-> no car parked, 1-> a car is in that spot


int park_unpark(char action, char building, int floorNumber,int spotNumber){
  int building_number;

  if (building == "A"){
    building_number = 0;
  }
  else if (building == "B") {
    building_number = 1;
  }
  else if (building == "C") {
    building_number = 2;
  }

  if (action == "P"){
    if (parkingData[building_number][floorNumber][spotNumber] != 0){
      printf("Error while parking your car, the space is already reserved. Try again\n");
    }
    else{
      parkingData[building_number][floorNumber][spotNumber] = 1;
      printf("Car unparked!\n" );
    }
  }

  if (action == "U"){
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
          printf("%d, ", z+1);
        }
        if (z == 99){
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
          printf("[%d: Reserved]");
        }
        if (z == 99){
          printf("\n");
        }

      }
    }
  }

}
