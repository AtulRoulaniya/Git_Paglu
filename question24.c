/* Q24: Write a program to calculate an electricity bill based on units consumed. */
#include<stdio.h>
int main()
{
    int unit;
    printf("Enter units:");
    scanf("%d",&unit);
    if(unit>=0&&unit<100)
    {
        int bill=unit*5;
        printf("Bill=%d\n", bill);
    }
    else if (unit>=100&&unit<=200)
    {
        int bill=100*5+(unit-100)*9;
        printf("Bill=%d\n", bill);
    }
    else 
    {
        int bill=100*5+100*9+(unit-200)*16;
        printf("bill=%d\n", bill);
    }    
}