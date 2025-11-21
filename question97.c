//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a string:");
    char str[100], n;
    int i;
    fgets(str,sizeof(str),stdin);
    if(str[0] >= 'a' && str[0] <= 'z')
    {
        printf("%c", str[0]-32);
    }
    else
    {
        printf("%c", str[0]);
    }
    for( i=1;str[i] != '\0';i++)
    {
        if (str[i] == ' ')
        {
            n=str[i+1];
         if( n >= 'a' && n <='z')
        {
        printf("%c", n);
        }
       else
       {
         if (n!= ' ' && n != '\n' && n != '\0') 
        {
                    printf("%c.", n);
        }
    }
    printf("\n");
    return 0;
    }
}