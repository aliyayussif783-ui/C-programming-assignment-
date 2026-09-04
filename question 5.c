#include <stdio.h>

int main() {
    float r1, r2, r3, largest;

    printf("Enter first resistance: ");
    scanf("%f", &r1);

    printf("Enter second resistance: ");
    scanf("%f", &r2);

    printf("Enter third resistance: ");
    scanf("%f", &r3);

    largest = r1;

    if (r2 > largest) {
        largest = r2;
    }

    if (r3 > largest) {
        largest = r3;
    }

    printf("Largest resistance = %.2f ohms\n", largest);

    return 0;
}