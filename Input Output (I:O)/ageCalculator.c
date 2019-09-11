/*
This small script asks you to enter your birthday and gives you your current age
and the age in days and how many days until your next birthday.
*/


#include <stdio.h>

int main(void)
{
  int birthday[8];
  printf("Welcome to age calculator, follow the instructions!\n");
  printf("What's your birthday? (MMDDYYYY)");
  for (int i = 0; i < 7; i++){
  scanf("%d", &birthday[i]);
  }

  printf("You entered : %d", *birthday);

  return 0;
}
