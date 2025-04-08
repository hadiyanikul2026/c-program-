// A program to convert minutes instand remaining minutes 
/* steps
1)create variable minutes and hours 
2)take minutes and inpute from user and store it into minutes variable
3)calculate hours  using formula horse = minutes / 60
4)calculate hours remaining minutes using formula minutes =minutes-(hours * 60)
5)display hours and minutes 
 */
#include<stdio.h>
void main ()
{
    int hours,minutes; 
    printf("Enter the minutes");
    scanf("%d",&minutes);
    hours = minutes / 60;
    minutes = minutes - (hours * 60);
    printf("hours=%d minutes%d",hours,minutes);
         
}     