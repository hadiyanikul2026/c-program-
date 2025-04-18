// A program to demostrate unary operators
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    b = ++a;
    printf("b=%d a=%d",b,a);
    b = a++;
    printf("\nb=%d a=%d",b,a);
    b = --a;
    printf("\nb=%d a=%d",b,a);
    b = a--;
    printf("\nb=%d a=%d",b,a);
}