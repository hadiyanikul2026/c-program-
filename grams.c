// A program to convert grams into kilograms and remaining grams
/*
Steps
1) create variable grams and kilograms
2) take input of grams from user
3) calculate grams into kilograms using formula kilograms = grams / 1000
4) calculate remaining grams using formula grams = grams - (kilograms * 1000) 
5) display kilograms and grams
*/
#include<stdio.h>
void main()
{
    int grams,kilograms;
    printf("Enter the grams:");
    scanf("%d",&grams);
    kilograms = grams / 1000;
    grams = grams - (kilograms * 1000);
    printf("kilograms=%d grams=%d",kilograms,grams);
}