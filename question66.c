//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num;
    printf("Enter the element to insert:\n");
    scanf("%d", &num);
    int newArr[n+1];
    int i = 0, j = 0;
    while(i < n && arr[i] < num)
    {
        newArr[j++] = arr[i++];
    }
    newArr[j++] = num;
    while(i < n)
    {
        newArr[j++] = arr[i++];
    }

    printf("Array after insertion:\n");
    for(i = 0; i < n+1; i++)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}
