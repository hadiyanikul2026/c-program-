// A program to swap two variables without creating third variable
/*Steps
1) create variable a and b
2) take input from user regarding the value of both the varaiables
3) a = a + b
4) b = a - b
5) a = a - b
6) display a and b
*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("a=%d b=%d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na=%d b=%d",a,b);
}