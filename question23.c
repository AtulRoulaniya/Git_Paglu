//Q23: Write a program to calculate a library fine based on late days.//
#include<stdio.h>
int main()
{
    int days;
    printf("Enter late days:");
    scanf("%d", &days);
    if(days>=1&&days<=7)
    {
        printf("fine=%d\n", days*2);
    }
    else if (days>=8&&days<=14)
    {
        printf("fine=%d\n", days*4);
    }
    else if (days>=15&&days<=30)
    {
       printf("fine=%d\n", days*6); 
    }
    else
    {
    printf("Membership Cancelled\n");
    } 
}