#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int multiplied = x;
    multiplied *= y;

    if (y == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        int divided = x;
        divided /= y;

        printf("Multiplication: %d\n", multiplied);
        printf("Division: %d\n", divided);
    }

    return 0;
}
