// A program to reverse two digit of given amount
/*
Steps
1) create a variable amount , last_digit , first_digit
2) take amount from user
3) get last digit of amount using formula
   last_digit = amount % 10
4) get first digit of amount using formula 
   first_digit = amount / 10
5) combine both digits using formula 
   amount = (last_digit * 10) + first_digit
*/
#include<stdio.h>
void main()
{
    int amount,last_digit,first_digit;
    printf("Enter the amount:");
    scanf("%d",&amount);
    last_digit = amount % 10;
    first_digit = amount / 10;
    amount = (last_digit * 10) + first_digit;
    printf("reverse amount=%d",amount);
}