#include <stdio.h>
int main() {
    int n1, n2, i, gcd = 1;
    printf("Enter number in n1:\n");
    printf("Enter number in n2:\n");
    scanf("%d %d", &n1, &n2);
    int min = (n1 < n2) ? n1 :n2;
    for (i = 1; i <= min; i++) 
    {
        if (n1 % i == 0 && n2 % i == 0) 
        {
            gcd = i;
        }
    }
    printf("%d\n", gcd);
    return 0;
}
