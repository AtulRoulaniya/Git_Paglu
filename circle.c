 //Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r;
    printf("Enter the radius:");
    scanf("%f",& r);
    float area = 3.14*r*r;
    float circum = 2*3.14*r;
    printf("Area=%f\n", area);
    printf("Circumference=%f\n", circum);
    return 0;
}