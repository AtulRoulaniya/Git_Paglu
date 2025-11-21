// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Enter a string:");
    char str[100];
    int freq[26] = {0};
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    for (int i = 0; str[i] != '\0'; i++)
     {
        if (str[i] >= 'a' && str[i] <= 'z')
         {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) 
            {
                printf("%c\n", str[i]);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}
