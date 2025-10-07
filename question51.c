/* Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main() {
    int i, j, space;
    int rows = 5; // Number of lines in the pattern

    for(i = 1; i <= rows; i++) 
    {
        for(space = 1; space <= rows - i; space++) 
        {
            printf(" ");
        }
        for(j = rows - i + 1; j <= rows; j++)
         {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
