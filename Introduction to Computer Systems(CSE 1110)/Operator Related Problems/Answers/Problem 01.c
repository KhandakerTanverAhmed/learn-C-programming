#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);

    if (y != 0) {
        printf("Quotient: %d\n", x / y);
        printf("Reminder: %d\n", x % y);
    } else {
        printf("Division and modulo by zero are undefined.\n");
    }

    return 0;
}