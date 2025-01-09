#include <stdio.h>

int main() {
    int a;
    double b;
    int choice;

    scanf("%d %lf", &a, &b);
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Addition: %.2lf\n", a + b);
    } else if (choice == 2) {
        printf("Subtraction: %.2lf\n", a - b);
    } else if (choice == 3) {
        printf("Multiplication: %.2lf\n", a * b);
    } else if (choice == 4) {
        if ((int)b == 0) {
            printf("Quotient: 0\n");
        } else {
            printf("Quotient: %d\n", a / (int)b);
        }
    } else {
        printf("Invalid choice. Please select a valid option (1-4).\n");
    }

    return 0;
}