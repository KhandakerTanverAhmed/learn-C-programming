#include <stdio.h>

int main() {
    float x, y;
    scanf("%f %f", &x, &y);

    printf("Addition: %f\n", x + y);
    printf("Subtraction: %f\n", x - y);
    printf("Multiplication: %f\n", x * y);

    if (y != 0) {
        printf("Quotient: %d\n", (int)x / (int)y);
        printf("Reminder: %d\n", (int)x % (int)y);
    } else {
        printf("Division and modulo by zero are undefined.\n");
    }

    return 0;
}