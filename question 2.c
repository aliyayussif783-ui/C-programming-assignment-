#include <stdio.h>

int main() {
    float voltage;
    float safeLimit = 12.0;

    printf("Enter measured voltage: ");
    scanf("%f", &voltage);

    if (voltage > safeLimit) {
        printf("WARNING: Voltage is above the safe limit.\n");
    } else {
        printf("Voltage is within the safe limit.\n");
    }

    return 0;
}