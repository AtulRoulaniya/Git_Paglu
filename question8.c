#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sum;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum=%d\n", sum);
    return 0;
}