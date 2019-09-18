# Parking Garage

## About
This a small implementation for a company's parking system. The xyz company has 3 buildings (A, B and C)
and each building has 6 floors for parking and each parking floor has 100 parking spots. The implementation
is done with a 3-dimensional array which contains all the parking spots across the buildings.

## parkingGarage.h

import- stdlib.h for rand().

### void isFull()
No arguments, no return values. This function iterates through the array and records how many open spots (0s in array) are there. It also then prints the same information out.

### void park_unpark()
No arguments, no return values. When called, it asks for more inputs from the user through command line. It asks whether to park/unpark, the building, the floor and the parking spot. All the inputs are checked for correctness and inside while loops which makes sure a right input is entered before moving forward. Based on the input and the values in array it prints out whether the task was completed or not.

### void showOpenSpots()
No arguments, no return values. This function runs three nested for loops which checks every value in array and prints out all the open spots with building names and a new line starts for every floor.

### void showAllSpots()
No arguments, no return values. This prints out every spot's data. It runs a nested for loop sequence to iterate through every array element and prints out data in following manner:
[spot_number: Open] or [spot_number: Reserved].


## parkingGarage.c

### 3 Dimensional Array
This is the header file which has the implementation of 3D array named parkingData. This array has the values:
1 and 0s. 1 indicates that there is already a car in that parking spot. 0 indicates that parking spot is empty.
After initialization, the nested for loops assigns each spot a value. To fill them randomly, I used the rand() function
and set the limits to 0 and 1.


### Main function
The main function runs a while loop and keeps asking for input until you select exit. The menu has 5 different options. All the input taken in is checked and if the input is not right, it prints an error through either default case or through the function itself. A switch statement is implemented for the input of menu which calls specific functions from the header file. Everything works for capital letters.



*Written by Himanshu Joshi joshi271@umn.edu*
