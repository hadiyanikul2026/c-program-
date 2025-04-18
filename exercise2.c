// A program to find out elder brother from to brother's age
/*
Steps 
1) create variable brother_1 and brother_2
2) take of input of age of brother 1 from user 
3) take of input of age of brother 2 from user   
4) check if the age of brother 1 is greater than the age of brother 2
   then display the message that brother 1 is elder brother
5) otherwise
   display the message that brother 2 is elder brother    
*/
#include<stdio.h>
void main()
{
    int brother_1,brother_2;
    printf("Enter the age of brother 1:");
    scanf("%d",&brother_1);
    printf("Enter the age of brother 2:");
    scanf("%d",&brother_2);
    if(brother_1>brother_2)
    {
        printf("Brother 1 is elder brother");
    }
    else
    {
        printf("Brother 2 is elder brother");
    }
}