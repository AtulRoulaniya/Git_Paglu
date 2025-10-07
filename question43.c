//Q43: Write a program to check if a number is a strong number.
#include<stdio.h>
int main()
{
    int num,d,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp=num;
    while(temp>0)
    {
        d=temp%10;
        int fact=1;
        for(int i=1;i<=d;i++)
        { 
          fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }
    return 0;

}