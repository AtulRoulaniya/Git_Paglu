// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter strings:");
    int MAX = 100;
    char str1[MAX], str2[MAX], concat[2 * MAX];
    printf("Enter strings:");
    if (fgets(str1, MAX, stdin) == NULL) return 0;
    if (fgets(str2, MAX, stdin) == NULL) return 0;
    int len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') str1[--len1] = '\0';
    int len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') str2[--len2] = '\0';
    if (len1 != len2)
     {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(concat, str1);
    strcat(concat, str1);
    if (strstr(concat, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
