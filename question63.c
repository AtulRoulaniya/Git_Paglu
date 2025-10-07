/* Q63: Merge two arrays.
 */
/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n,m,k=0;
    printf("Enter size of array:");
    scanf("%d %d", &n , &m);
    int ar[n];
    int arr[m];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i=0;i<m;i++)
    {
        scanf("%d", &arr[i]);
    }
    int p=n+m;
    int arrr[p];
    for (int i=0;i<n;i++)
    {
        arrr[k]=ar[i];
        k++;
    }
    for (int i=0;i<m;i++)
    {
        arrr[k]=arr[i];
        k++;
    }
    for (int i=0;i<p;i++)
    {
        printf("%d " , arrr[i]);
    }
    return 0;
}