// A program to convert months into month's name
/*
Steps
1) create variable month
2) take input of month number from user
3) if month is 1 then display the message that month is january
4) if month is 2 then display the message that month is february
5) if month is 3 then display the message that month is march
6) if month is 4 then display the message that month is april
7) if month is 5 then display the message that month is may
8) if month is 6 then display the message that month is june
9) if month is 7 then display the message that month is july
10) if month is 8 then display the message that month is august
11) if month is 9 then display the message that month is september
12) if month is 10 then display the message that month is october
13) if month is 11 then display the message that month is november
14) if month is 12 then display the message that month is december
15) if month is less than 0 then display the message that month cannot be negative 
16) if month is 0 then display the message that month cannot be zero
17) if month is greater than 12 then display the message that month cannot be possible
*/
#include<stdio.h>
void main()
{
    int month;
    printf("Enter the month:");
    scanf("%d",&month);
    if(month == 1)
    {
        printf("The month is January");
    }
    if(month == 2)
    {
        printf("The month is February");
    }
    if(month == 3)
    {
        printf("The month is March");
    }
    if(month == 4)
    {
        printf("The month is April");
    }
    if(month == 5)
    {
        printf("The month is May");
    }
    if(month == 6)
    {
        printf("The month is June");
    }
    if(month == 7)
    {
        printf("The month is July");
    }
    if(month == 8)
    {
        printf("The month is August");
    }
    if(month == 9)
    {
        printf("The month is September");
    }
    if(month == 10)
    {
        printf("The month is October");
    }
    if(month == 11)
    {
        printf("The month is November");
    }
    if(month == 12)
    {
        printf("The month is December");
    }
    if(month < 0)
    {
        printf("The month cannot be negative");
    }
    if(month == 0)
    {
        printf("The month cannot be zero");
    }
    if(month > 12)
    {
        printf("The month cannot be possible after 12");
    }
}