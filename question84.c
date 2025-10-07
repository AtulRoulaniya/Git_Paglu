// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string in lowercase:\n");
    char str[100],str1[100];
    int i=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i] !='\0';i++)
    {
        char ch=str[i];
        if (ch>='a'&&ch<='z')
        {
            str1[i]=(char)ch-32;
        }
    }
    puts(str1);
    return 0;
}