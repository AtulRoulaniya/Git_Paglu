//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter number in a:\n");
    scanf("%d",&a);
    printf("Enter number in b:\n");
    scanf("%d",&b);
    printf("Enter a mathematical operator:\n");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
    {
        int sum=a+b;
        printf("sum is=%d\n", sum);
        break;
    }
    case '-':
    {
        int subtract=a-b;
        printf("subtraction is=%d\n", subtract);
        break;
    }
    case '*':
    {
        int multi=a*b;
        printf("Multiplication is=%d\n",multi);
        break;
    }
    case '/':
    {
        if(b!=0)
        {
        int div=a/b;
        printf("Division is=%d\n", div);
        }
        else
        {
            printf("error in divison");
        }
        break;
    }
    case '%':
    {
        if(b!=0)
        {
        int mod=a%b;
        printf("mod is=%d\n", mod);
        }
        else
        {
            printf("error in modulus");
        }
        break;
    }
    default:
    {
        printf("Invalid Input");
        break;
    }    
    }
    return 0;
}