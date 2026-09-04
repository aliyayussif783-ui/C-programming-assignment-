#include <stdio.h>

int main() {
    float sensor, sum = 0, average;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Enter sensor value %d: ", i);
        scanf("%f", &sensor);

        sum = sum + sensor;
    }

    average = sum / 5;

    printf("Average sensor value = %.2f\n", average);

    return 0;
}