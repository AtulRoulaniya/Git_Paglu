//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter month number");
    scanf("%d", &month );
    switch (month)
    {
    case 1:
    {
        printf("january,31 days\n");
        break;
    }
    case 2:
    {
        printf("February,28 days\n");
        break;
    }
    case 3:
    {
        printf("March, 31 days\n");
        break;
    }
    case 4:
    {
        printf("April, 30 days\n");
        break;
    }
    case 5:
    {
        printf("May, 31 days\n");
        break;
    }
    case 6:
    {
        printf("june, 30 days\n");
        break;
    }
    case 7:
    {
        printf("july, 31 days\n");
        break;
    }
    case 8:
    {
        printf("August, 30 days\n");
        break;
    }
    case 9:
    {
        printf("September,31 days\n");
        break;
    }
    case 10:
    {
        printf("October, 30 days\n");
        break;
    }
    case 11:
    {
        printf("November , 31 days\n");
        break;
    }
    case 12:
    {
        printf("December , 30 days\n");
        break;
    }
    default:
    {
        printf("Invalid input\n ");
        break;
    }
}
}