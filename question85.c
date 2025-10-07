//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:\n");
    char str[100],str1[100];  
    int c=0,j=0;
    fgets(str,sizeof(str),stdin);
    int size=strlen(str);
    for(int i=size-1 ;i >= 0; i--)
    { 
      char ch=str[i];
      str1[j]=ch;
      j++;
    }
    str1[j]='\0';
    puts(str1);
    return 0;
}