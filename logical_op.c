// A program to demostrate logical operator
#include<stdio.h>
void main()
{
    int a,b,c,result;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    result = a == b && b == c;
    printf("\n%d = %d == %d && %d == %d",result,a,b,b,c);
    result = a == b || b == c;
    printf("\n%d = %d == %d || %d == %d",result,a,b,b,c);
    result = ! (a == b);
    printf("\n%d = ! a == b",result,a,b);
}