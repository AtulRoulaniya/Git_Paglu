//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:");
    char str[100],ch,str1[100];
    int i=0,j=0;
    fgets(str,sizeof(str),stdin);
    for( i=0;str[i]!='\0';i++ )
    {
        ch=str[i];
        if( ch>='a' && ch<='z')
        {
             char ch1=(char)ch-32;
            str1[j]=ch1;
            j++;
        }
        else if ( ch>='A' && ch<='Z')
        {
             char ch2=(char)ch+32;
            str1[j]=ch2;
            j++;
        }
        else
        {
            str1[j] = ch;
            j++;
        }
    }
    str1[j]='\0';
    puts(str1);
    return 0;
}