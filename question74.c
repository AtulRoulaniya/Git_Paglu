//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter array size:");
    scanf("%d %d", &n ,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}