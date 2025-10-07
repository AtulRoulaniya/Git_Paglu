//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size");
    scanf("%d", &n);
    int arr[n][n];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int p=1;
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i][i]==arr[j][j])
            {
                p=0;
                break;
            }
        }
    }
    if(p==1)
    {
        printf("true\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}