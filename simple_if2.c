// A program to findout given number is even or odd
/*
Steps
1) create number and reminder
2) take input of number from user
3) calculate reminder of number by dividing it with 
   reminder = number % 2
4) if reminder = 1 or -1
   then display the message that number is odd  
5) if reminder = 0
   then display the message that number is even 
*/
#include<stdio.h>
void main()
{
   int number,reminder;
   printf("Enter the number:");
   scanf("%d",&number);
   reminder = number % 2;
   if (reminder == 1 || reminder == -1)
   {
      printf("The number is odd");
   }
   if (reminder == 0)
   {
      printf("The number is even");
   }
}