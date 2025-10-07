// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:");
    char str[100];
    int i=0,s=0,d=0,spe=0;
    fgets(str,sizeof(str),stdin);
    for ( i=0;str[i] != '\0';i++)
    {
         char ch=str[i];
         if(ch>='0' && ch<='9')
         {
            d++;
         }
         else if ((ch >= 'a' && ch <= 'z') || (ch >='A' && ch<='Z'))
         {
            continue;
         }
         else if (ch ==' ')
         {
            s++;
         }
         else
         {
           spe++;
         }
    }
    printf("spaces=%d, Digits=%d, special=%d",s,d,spe);
    return 0;
}