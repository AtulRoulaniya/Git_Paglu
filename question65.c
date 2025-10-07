/* Q65: Search in a sorted array using binary search.
 */
/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n,temp,low=0,found=-1,mid;
    printf("Enter the size of array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the searching number:");
    scanf("%d", &temp);
    int high=n-1;
    while (low<=high)
    {
        mid=low+(high-low)/2;
        if (arr[mid]==temp)
        {
            found=mid;
            break;
        }
    if (arr[mid]<temp)
    {
        low=mid+1;
    }
    else 
    {
        high=mid-1;
    }
    }
    if(found != -1)
    {
        printf("Found at index=%d\n", found);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}