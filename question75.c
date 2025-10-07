//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter array size:");
    scanf("%d %d", &n ,&m);
    int arr[n][m];
    int ar[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d" , &ar[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }

    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
            sum[i][j]=arr[i][j] + ar[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}