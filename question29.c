//Q29: Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int num,factorial=1;
    printf("Enter a number");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial is=%d\n", factorial);
    return 0;
}