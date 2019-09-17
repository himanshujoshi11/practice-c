#include <stdio.h>
#include <stdlib.h>

int parkingData[3][6][100];                    //Parking data for a company's buildings
                                              // 0-> no car parked, 1-> a car is in that spot

for (int i = 0; i < 3; i++){                 // The three buildings: A, B and C
  for (int j = 0; j < 6; j++){               // Each Building has 6 parking floors
    for (int z = 0; z < 100; z++){           // Each floor has 100 parking spots
      parkingData[i][j][z] = rand() % 1;     // use of stdlib's rand function to assign
                                             // a random value between 0 and 1
    }
  }
}

int park_unpark(int )


void showOpenSpots(){

}

void
