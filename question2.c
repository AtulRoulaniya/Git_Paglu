//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number in a:");
    scanf("%d",& a);
    printf("Enter number in b:");
    scanf("%d",& b);
    int sum=a + b;
    int diff= a-b;
    int product=a*b;
    printf("sum=%d \n", sum);
    printf("diff=%d\n", diff);
    printf("Product=%d\n", product);
    if(b!=0)
    {
        int quotient=a/b;
        printf("Quotient=%d\n", quotient);
    }
    else 
    {
        printf("Denominator is invalid\n");
    }
    return 0; 
}