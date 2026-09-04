#include <stdio.h>

int main() {
    float battery;

    printf("Enter battery level (%): ");
    scanf("%f", &battery);

    if (battery < 20) {
        printf("Battery status: LOW\n");
    }
    else if (battery < 80) {
        printf("Battery status: NORMAL\n");
    }
    else {
        printf("Battery status: FULL\n");
    }

    return 0;
}