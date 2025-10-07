/* Q54: Write a program to print the following pattern:

*

***

*****
*******
***

* */



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include<stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=7;i=i+2)
   {
    for(j=1;j<=i;j++)
    {
        printf("*");
        if(i==1)
        {
            printf("\n");
        }
        else if (i==3)
        {
        for (j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
        }   
    }
    printf("\n");
   }
   for (i=3;i>=1;i=i-2)
   {
    for(j=1;j<=i;j++)
    {
        printf("*");
        if (i==3)
        {
        for (j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
        }
    }
    printf("\n");
   }
   return 0;
}
