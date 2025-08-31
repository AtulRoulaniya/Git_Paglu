#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int lrg;
    printf("Enter number in a:");
    scanf("%d", &a);
    printf("Enter number in b:");
    scanf("%d", &b);
    printf("Enter number in c:");
    scanf("%d", &c);
    if(a>b && a>c)
    {
        lrg=a;
    }
    if(b>a && b>c)
    {
        lrg=b;
    }
    else
    {
        lrg=c;
    }
    printf("Largest is=%d\n", lrg);
    return 0;
}