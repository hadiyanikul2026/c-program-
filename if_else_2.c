// A program to determine profit or loss using cost price and sales price
/*
Steps
1) create variable cost price,sales price,difference
2) take cost price as input from user
3) take sales price as input from user 
4) calculate difference between sales price and cost price 
   differnce = sales_price - cost_price
5) check if difference is above 0 
   then display its amount as profit
6) otherwise   
display its amount as loss  
*/
#include<stdio.h>
void main()
{
    int cost_price,sales_price,difference;
    printf("Enter the cost price:");
    scanf("%d",&cost_price);
    printf("Enter the sales price:");
    scanf("%d",&sales_price);
    difference = sales_price - cost_price;
    if(difference>0)
    {
        printf("profit=%d",difference);
    }
    else
    {
        printf("loss=%d",difference);
    }
}