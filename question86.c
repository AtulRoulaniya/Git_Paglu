//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:\n");
    char str[100],str1[100];  
    int c=0,j=0;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    int size=strlen(str);
    for(int i=size-1 ;i >= 0; i--)
    { 
      char ch=str[i];
      str1[j]=ch;
      j++;
    }
    str1[j]='\0';
    int p= strcmp(str, str1);
     if(p == 0)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not Palindrom");
    }
    return 0;
}