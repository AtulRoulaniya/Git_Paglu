#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        // Two distinct and real roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different:\nRoot1 = %f\nRoot2 = %f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Two equal and real roots
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same:\nRoot1 = Root2 = %f\n", root1);
    }
    else 
    {
        printf("Roots are complex .\n");  
    }

    return 0;
}


