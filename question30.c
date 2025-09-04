//Q30: Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num>0)
    {
        int d=num%10;
        rev= rev*10+d;
        num=num/10;
    }
    printf("reverse of a number is=%d\n", rev);
}