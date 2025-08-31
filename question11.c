#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    if(n%2==0)
    printf(" is even=%d\n", n);
    else
    printf( " is odd=%d\n", n);
    return 0;
    
}