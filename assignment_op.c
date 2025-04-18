
// A program to demostrate assignment operators
#include<stdio.h>
void main()
{
   int a,b;
   printf("Enter the value of a:");
   scanf("%d",&a);
   printf("Enter the value of b:");
   scanf("%d",&b);
   a+=b;
   printf("a=%d b=%d",a,b);
   a-=b;
   printf("\na=%d b=%d",a,b);
   a*=b;
   printf("\na=%d b=%d",a,b);
   a/=b;
   printf("\na=%d b=%d",a,b);
   a%=b;
   printf("\na=%d b=%d",a,b);
}
