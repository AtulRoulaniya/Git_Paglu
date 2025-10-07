//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main()
{
    int num;
    float sum=0,p=2,q=3;
    printf("Enter a number:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+p/q;
        p=p+2;
        q=q+4;
    }
    printf("Approximate sum=%f\n", sum);
    return 0;
}