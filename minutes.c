// A program to convert hours into minutes
/*Steps
1) Create variables hours and minutes
2) Take hour as input from user 
3) convert hour into minutes using formula minutes = hours * 60
4) display minutes
*/
#include<stdio.h>
void main()
{
  int hours,minutes;
  printf("Enter the hours :");
  scanf("%d",&hours);
  minutes = hours * 60;
  printf("minutes=%d",minutes);
}