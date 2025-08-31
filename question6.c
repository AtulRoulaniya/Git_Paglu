//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("Enter second number");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("Ater swap: %d\n",a);
    printf("Ater swap:%d\n",b);
    return 0;
}