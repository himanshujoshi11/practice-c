#include "parkingGarage.h"
#include <stdio.h>



int main() {

  while(1){
    printf("==============================================================\n");
    printf("Welcome to parkingGarage for xyz, Select one of these options:\n");
    printf("==============================================================\n");
    printf("1. Show all open parking spots.."\n);
    printf("2. Check parking status for a spot number?"\n);
    printf("3. "\n);
    printf("4. "\n);
    printf("----------------------------------------------------------------");
    printf("Enter Selection:");
    char selection;
    selection = getchar();

    switch(selection) {
      case '1' :
      break;

      case '2' :
      break;

      case '3' :
      break;

      case '4' :
      break;

      default  :
      printf("Invalid selection, try again!"\n);
      printf("\n \n \n");
      
    }


  }

}
