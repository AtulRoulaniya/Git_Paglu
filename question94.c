//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Enter a string:");
    char sentence[100], longest[100] = "", word[100];
    int max_len = 0, i = 0, j = 0;
    fgets(sentence, sizeof(sentence), stdin);
    while (1) 
    {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') 
        {
            word[j++] = sentence[i];
        }
         else 
        {
            if (j > max_len) 
            {
                word[j] = '\0';
                max_len = j;
                strcpy(longest, word);
            }
            j = 0;
            if (sentence[i] == '\n' || sentence[i] == '\0')
            {
                break;
            }
        }
        i++;
    }
    printf("%s\n", longest);
    return 0;
}
