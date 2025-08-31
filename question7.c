#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number in a:");
    scanf("%d", &a);
    printf("Enter number in b:");
    scanf("%d", &b);
    a= a+b;
    b=a-b;
    a=a-b;
    printf("After swap =%d %d",a,b);
    return 0;
}