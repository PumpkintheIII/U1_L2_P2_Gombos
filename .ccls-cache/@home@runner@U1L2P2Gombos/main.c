/*
  UB C Programming Unit 1 Lesson 2 Program 2
  Average of Entered Numbers
  Max Gombos
*/
#include <stdio.h>

int main(void) {
  float num1, num2, num3, numSum;

  printf("Please enter a number: "); //Asks user for the first number
  scanf("%f", &num1); 
  //collects the users input and formats it as a float
  
  printf("Please enter a number: "); //Asks user for the second number
  scanf("%f", &num2); 
  //collects the users input and formats it as a float

  printf("Please enter a number: "); //Asks user for the third number
  scanf("%f", &num3); 
  //collects the users input and formats it as a float
  
  printf("\nFirst number: %f", num1); //prints num1
  printf("\nSecond number: %f", num2); //prints num2
  printf("\nThird number: %f", num3); //prints num3

  numSum += num1; //adds num1 to numSum
  numSum += num2; //adds num2 to numSum
  numSum += num3; //adds num3 to numSum
  printf("\nSum: %f", numSum); //prints numSum
}