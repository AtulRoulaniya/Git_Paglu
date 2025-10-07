//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
    int n,i,sum=0,d;
    printf("Enter a number:");
    scanf("%d", &n);
    int m=n;
    while (n>0)
    {
        d=n%10;
        sum=sum+(d*d*d);
        n=n/10;
    }
    if(sum==m)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}