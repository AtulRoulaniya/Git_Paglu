// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int l;
    int b;
    printf("Enter the length:");
    scanf("%d",& l);
    printf("Enter the breath:");
    scanf("%d",& b);
    int area= l*b;
    int perimeter = (l+b)+(l+b);
    printf("Area=%d\n", area);
    printf("perimeter=%d\n", perimeter);
    return 0;
}