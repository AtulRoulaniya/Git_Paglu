//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:");
    char str[100],str1[100];
    int i=0,j=0;
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i] != '\0';i++)
    {
        char ch=str[i];
        if(ch==' ')
        {
            char ch1='-';
            str1[j]=ch1;
            j++;
        }
        else
        {
            str1[j]=ch;
            j++;
        }
    }
    str1[j]='\0'; 
    puts(str1);
    return 0;
}