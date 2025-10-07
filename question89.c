//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:");
    char str[100],ch;
    int i=0,j=0;
    fgets(str,sizeof(str),stdin);
    printf("Enter a character to find its frequency in this string:\n");
    scanf("%c",&ch);
    for( i=0; str[i] != '\0';i++)
    {
         if(str[i]==ch)
         {
            j++;
         }
    }
    printf("%d\n",j);
    return 0;
}