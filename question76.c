//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int n,m;
    printf("Enter array size");
    scanf("%d %d",&m, &n); 
    int a[n][n];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p = 1;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
    {
            if(a[i][j] != a[j][i])
             {
                p = 0;
                break;
            }
        }
    }
    if(p==1)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
