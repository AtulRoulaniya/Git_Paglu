// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter first array size: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int r, c;
    printf("Enter second array size (rows columns): ");
    scanf("%d %d", &r, &c);
    int arrr[r][c];
    for (int i = 0; i < r; i++)
     {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &arrr[i][j]);
        }
    }
    if (m != r) 
    {
        printf("Cannot be multiplied:\n");
        return 1;
    }
    int ar[n][c];
    for (int i = 0; i < n; i++) 
    {         
        for (int j = 0; j < c; j++) 
        {     
            ar[i][j] = 0; 
            for (int k = 0; k < m; k++) 
            { 
                ar[i][j] += arr[i][k] * arrr[k][j];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < c; j++) 
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
   return 0;
}