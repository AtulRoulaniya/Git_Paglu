//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
    int n,large,second_large,i;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n; i++)
    {
        if(arr[i]>large)
        {
            second_large=large;
            large=arr[i];
        }
        else if (arr[i]>second_large && arr[i] != large)
        {
            second_large=arr[i];
        }
    }
    printf("%d\n",second_large);
    return 0;
}