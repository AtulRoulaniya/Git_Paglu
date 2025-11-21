//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int main() 
{
    printf("Enter a string:");
    int MAX=100;
    char str1[MAX], str2[MAX];
    int count[256] = {0};
    int i, len1, len2;
    if (fgets(str1, MAX, stdin) == NULL) return 0;
    if (fgets(str2, MAX, stdin) == NULL) return 0;
    len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }
    len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }
    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }
    for (i = 0; i < len1; i++) {
        char c1 = str1[i];
        char c2 = str2[i];
        if (c1 >= 'A' && c1 <= 'Z') c1 = c1 + ('a' - 'A');
        if (c2 >= 'A' && c2 <= 'Z') c2 = c2 + ('a' - 'A');
        count[(unsigned char)c1]++;
        count[(unsigned char)c2]--;
    }
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
