//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() 
{
    int num, first, last, temp, digits = 0, pow = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    temp = num;
    last = temp % 10;
    while (temp >= 10) 
    {
        temp=temp/10;
        pow=pow*10;
    }
    first = temp;
    if (num < 10) 
    {
        printf("%d\n", num);
    } else 
{
        int mid = (num % pow) / 10;
        int swapped = last * pow + mid * 10 + first;
     printf( "%d\n", swapped);
}
    return 0;
}
