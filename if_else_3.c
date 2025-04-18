
// A program to categorize months having 28 days or 30 days or 31 days
/*
Steps 
1) create variable month 
2) take input of months from users
3) check if month is 2
   then display the month has 28 or 29 days
4) check if month is 4 or 6 or 9 or 11
   then display the month has 30 days
5) otherwise
   display the month has 31 days
*/
#include<stdio.h>
void main()
{
   int months;
   printf("Enter the months:");
   scanf("%d",&months);
   if(months == 2)
   {
      printf("Month has 28 or 29 days");
      return;
   }
   if(months == 4 || months == 6 || months == 9 || months == 11)
   {
      printf("Month has 30 days");
   }
   else
   {
      printf("Month has 31 days");
   }
}
