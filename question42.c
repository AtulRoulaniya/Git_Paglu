//Q42: Write a program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
          sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("perfect number\n");
    }
    else
    {
         printf("Not a perfect number\n");
    }
    return 0;
}