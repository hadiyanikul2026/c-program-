// A program to convert fahrenheit into celsius
/*Steps
1) Create variables fahrenheit and celsius 
2) Take fahrenheit as input from user 
3) convert fahrenheit into celsius using formula
   celsius = (fahrenheit - 32) + 1.8
4) display celsius
*/
#include<stdio.h>
void main()
{
  float fahrenheit,celsius;
  printf("Enter the fahrenheit:");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit - 32) / 1.8;
  printf("celsius = %.2f",celsius);
}