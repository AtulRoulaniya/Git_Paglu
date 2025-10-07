//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main()
{
    int n,pos=0,neg=0,zero=0 ;
    printf("Enter a number:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
    }
    printf("Positive=%d\n",pos);
    printf("Negative=%d\n",neg);
    printf("Zero=%d\n",zero);
    return 0;
}