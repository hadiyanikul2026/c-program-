// A program to convert hours from 24 hours format to 12 hours format
/*
Steps
1) create varaible hours
2) take input of hours from user
3) check if hours are above 11
   then subtract it from 12 and display the hours with word PM
4) check if hours are below 11
   then display the hours with word AM  
*/
#include<stdio.h>
void main()
{
    int hours;
    printf("Enter the hours:");
    scanf("%d",&hours);
    if(hours>11)
    {
        hours = hours - 12;
        printf("%d Pm",hours);
    }
    else
    {
        printf("%d AM",hours);
    }
}