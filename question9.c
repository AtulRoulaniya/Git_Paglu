    
#include<stdio.h>
#include<math.h>
int main()
{
    float principal;
    float rate;
    int time;
    printf("Enter principal:");
    scanf("%f",& principal);
    printf("Enter rate:");
    scanf("%f",& rate);
    printf("Enter time:");
    scanf("%d", & time);
    float si;
    si=(principal*rate*time)/100;
    float ci;
     ci=(principal*pow(1+rate/100,time)-principal);
     printf("Simple Interset=%f\n", si);
     printf("Compound Interset#i=%f\n", ci);
     return 0;
}
