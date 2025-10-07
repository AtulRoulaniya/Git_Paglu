//Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter a number:");
    scanf("%d", &num);
    int m=num;
    while(num>0)
    {
        int d=num%10;
        rev= rev*10+d;
        num=num/10;
    }
    if(m==rev)
    {
    printf("Palindrome\n");
    }
    else
    {
    printf("not a palindrome\n");
    }
    return 0;
}