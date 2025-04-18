// A program to demostrate simple if decision making statement
/*
  Steps 
  1) create variable number and cube
  2) take input of number from user
  3) check if the number is negative
     3.1) if the number is found negative then convert it into positive
     3.2) display that the number was negative and was converted into positive
  4) calculate cube using formula cube = number * number * number
  5) display cube
*/
#include<stdio.h>
void main()
{
    int number,cube;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number<0)
    {
      number = 0 - number;
      printf("The number was negative further converted into positive");
    }
    cube = number * number * number;
    printf("\ncube=%d",cube);
}
