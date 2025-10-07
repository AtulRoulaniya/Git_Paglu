// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter array size");
    scanf("%d %d ", &n ,&m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        {
            for( int j=0;j<m;j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
    }
    int r=0,c=0,d=1;
    for(int i=0;i<m*n;i++)
    {
        printf("%d " ,arr[r][c]);
        if(d==1)
        {
            if(c==n-1)
            {
                r++;
                d=-1;
            }
            else if(r==0)
            {
                c++;
                d=-1;
            }
            else
            {
                r--;
                c++;
            }
        }
        else
        {
            if(r==m-1)
            {
                c++;
                d=1;
            }
             else if(c==0)
            {
                r++;
                d=1;
               }
            else
           {
                r++;
                c--;
            }
        } 
    }
    return 0;
}