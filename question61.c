//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n,temp,f=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search:");
    scanf("%d", &temp);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==temp)
        {
            printf("Found at index=%d\n", i);
            f=1;
            break;
        }
    }
    if (f==0)
    {
        printf("-1\n");
    }
    return 0;
}