/*
// write a programe to convert given minutes into hours and remaining minutes
    steps
1.create a veriable minutes and hours
2.accept minutes frome user and store it minutes
3.calculate hours using formula hours = minutes / 60
4.calculate remaining minutes using formula minutes = minutes- (hours * 60)
5.display hours and minutes
*/
#include<stdio.h>
void main()
{
    int minutes and hours;
    printf("enter total minutes");
    scanf("%d",&minutes);
    hours = minutes - (hours * 60);
    minutes = minutes - (hours * 60);
    printf("hours = %d remaining minutes = %d", hours,minutes);
}