// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter a String:\n");
    char str[100];
    int v=0,c=0;
    fgets(str,sizeof(str),stdin);
    for (int j = 0; str[j] != '\0'; j++)
    {
        char ch=str[j];
        if (ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        {
            v++;
        }
        else if ((ch>'A'&&ch<'Z')||(ch>'a'&&ch<'z'))
        {
            c++;
        }
    }
    printf("vowels=%d consonants=%d\n", v,c);
    return 0;
}
