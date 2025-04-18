// A program to determine the years are millennium or not
/*
Steps
1) create variable years and millennium years
2) take input from user in years 
3) calculate millennium years using formula 
   millennium years = years / 1000
4) check if years are less than 1000
   then display the message the above entered years haven't formed a millennium year 
5) otherwise
   display the message of calculated millennium years    
*/
#include<stdio.h>
void main()
{
    int years,millennium_years;
    printf("Enter the years:");
    scanf("%d",&years);
    millennium_years = years / 1000;
    if(years<1000)
    {
        printf("The above entered years haven't formed a millennium year");
    }
    else
    {
        printf("millennium years=%d",millennium_years);
    }
}