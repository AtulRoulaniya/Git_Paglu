//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>
int main()
{
    int num,p=3,q=4;
    float sum=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        sum=sum+(float) p/q;
        p=p+2;
        q=q+2;
    }
     printf("Approximate sum=%f\n", sum);
     return 0;
}

