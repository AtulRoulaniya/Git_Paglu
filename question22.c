/* Q22: Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>
int main() {
    float cp, sp, diff, per;
    printf("Enter costprice and sellingprice:\n");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        diff = sp - cp;
        per = (diff / cp) * 100;
        printf("Profit %f\n", per);
    } else if (sp < cp) {
        diff = cp - sp;
        per = (diff / cp) * 100;
        printf("Loss %f\n", per);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
