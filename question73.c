//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main()
{
    int n,m,k=0,sum;
    printf("Enter array size:");
    scanf("%d %d", &n , &m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int ar[k];
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
             sum=sum+arr[i][j];
        }
        ar[k]=sum;
        k++;
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}