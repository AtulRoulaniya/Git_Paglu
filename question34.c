//Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
    {
        printf("PRIME\n");
    }
    else
    {
        printf("NOT PRIME\n");
    }
    return 0;
}