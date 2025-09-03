//Q28: Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int num;
    int product =1;
    printf("Enter a number:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
             
             product=product * i;
        }
    }
    printf("product of even numbers is=%d\n",product);
    return 0;
}