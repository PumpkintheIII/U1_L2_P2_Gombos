/*
  UB C Programming Unit 1 Lesson 2 Program 2
  Average of Entered Numbers
  Max Gombos
*/
#include <stdio.h> //import functions

int main(void) {
  float num1, num2, num3, numSum; //initialize variables
  numSum = 0; //declare numSum's starting value

  printf("This program finds the average of three numbers.\n");
  //instructions ^
  printf("Please enter a number: "); //Asks user for the first number
  scanf("%f", &num1); 
  //collects the users input and formats it as a float
  
  printf("Please enter a number: "); //Asks user for the second number
  scanf("%f", &num2); 
  //collects the users input and formats it as a float

  printf("Please enter a number: "); //Asks user for the third number
  scanf("%f", &num3); 
  //collects the users input and formats it as a float

  numSum += num1; //adds num1 to numSum
  numSum += num2; //adds num2 to numSum
  numSum += num3; //adds num3 to numSum

  numSum = numSum/3; //finds the average of the entered numbers

  printf("\nThe average of your entered numbers is: %f", numSum);
  //prints the average of the entered numbers
  return 0; //ends the program
}