//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a String:\n");
    char str[100],str1[100];
    int j=0;
    fgets(str,sizeof(str),stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch=str[i];
        if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        {
            continue;
        }
        else 
        {
            str1[j]=ch;
            j++;
        }
    }
    str1[j]='\0';
    puts(str1);
}