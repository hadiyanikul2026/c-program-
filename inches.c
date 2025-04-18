// A program to convert inches into foot and remaining inches
/*
1) create the variable inches and foot
2) take input of inches from user
3) calculate inches into foot and remaining inches using formula foot = inches * 0.0833
4) calculate remainig inches using formula inches = inches - (foot / 0.0833)
5) display foot and inches
*/
#include<stdio.h>
void main()
{
    float inches,foot;
    printf("Enter the inches:");
    scanf("%f",&inches);
    foot = inches * 0.0833;
    inches = inches - (foot / 0.0833);
    printf("foot=%.2f inches=%.2f",foot,inches); 
}