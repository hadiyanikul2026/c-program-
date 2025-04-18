// A program to convert minutes into hours and remaining minutes
/* Steps
1) create variable hours and minutes
2) take minutes as input from users and store it in minutes variables
3) calculate hours using formula hours = minutes / 60
4) calculate remaining minutes using formula minutes = minutes - (hours * 60)
5) display hours and minutes
*/
#include<stdio.h>
void main()
{
    int minutes,hours;
    printf("Enter the minutes:");
    scanf("%d",&minutes);
    hours = minutes / 60;
    minutes = minutes - (hours * 60);
    printf("hours = %d  minutes = %d",hours,minutes);
}
