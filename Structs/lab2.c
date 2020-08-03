#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"



//functions
void printRecords();
void printNumRecords();
void printDataSize();
void addRecord();
void deleteRecord();
void accessNum();



int main (){
	int exit = 1;
	int select;

	while(exit){
    printf("\n \n \n \n \n \n \n");
    printf("=================================================================\n");
    printf("Welcome to the student archives, what do you want to do today? \n");
    printf("=================================================================\n");
		printf("1. Print all records\n");
		printf("2. Print number of records\n");
		printf("3. Print size of database\n");
		printf("4. Add record\n");
		printf("5. Delete record\n");
		printf("6. Print number of accesses to database\n");
		printf("7. Exit\n");
		printf("-----------------------------------------------------------------\n");
		printf("\n\n");
		printf("Enter selection : ");

		char select;
    select = getchar();
    char sel = getchar();
    if (sel != '\n'|| select == '\n'){               //makes sure the scanned char is not a newline char.
      select = sel;
    }
    printf("\n");

		switch(select) {
      case '1' :                                                  //CASE 1: print all
      printRecords();
      break;

      case '2' :                                                  //CASE 2: print number of records
      printNumRecords();
      break;

      case '3' :                                                  //CASE 3: print data size
      printDataSize();
      break;

      case '4' :                                                 //CASE 4: Add record
      addRecord();
      break;

      case '5' :																								//CASE 5: delete last added record
			deleteRecord();

			case '6' :																								//CASE 6: Access the number of times
			accessNum();
			break;

			case '7':																									//CASE 7: Exit menu
			exit = 0;
			break;

      default  :                                                // Default case.
      printf("Invalid selection, try again!\n");
      printf("\n \n \n");

    }

	}
}
