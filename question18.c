#include<stdio.h>
int main()
{
    int per;
    printf("enter precentage:");
    scanf("%d", &per);
    if(per>=90&&per<=100)
    {
        printf("Grade A \n");
    }
    else if (per>=80&&per<90)
    {
        printf("Grade B \n");
    }
    else if (per>=70&&per<80)
    {
        printf("Grade C \n");
    }
    else if (per>=60&&per<70)
    {
        printf("Grade D \n");
    }
    else if (per>50&&per<60)
    {
        printf("Grade E \n");
    }
    else
    {
        printf("Grade F \n");
    }
    return 0;
}