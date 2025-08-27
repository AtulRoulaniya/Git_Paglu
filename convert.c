// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float celsius;
    printf("Enter the temperature in celsius:");
    scanf("%f", &celsius);
    float fahrenheit = (celsius*1.8)+32;
    printf("Fahreneit=%f\n", fahrenheit);
    return 0;
}