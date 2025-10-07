/* Q39: Write a program to find the product of odd digits of a number. */

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{
    int num,d,prd=1;
    printf("Enter a number:");
    scanf("%d", &num);
    while(num>0)
    {
        d=num%10;
        if(d%2!=0)
        {
        prd=prd*d;
        }
        num=num/10;
    }
    printf("product of odd numbers are:%d\n", prd);
    return 0;
}