#include <stdio.h>

int main() {
    double a, b;
    int choice, c;

    printf("Enter two numbers (a and b): ");
    scanf("%lf %lf", &a, &b);

    printf("Enter your choice (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Addition: %.2lf\n", a + b);
    } else if (choice == 2) {
        printf("Subtraction: %.2lf\n", a - b);
    } else if (choice == 3) {
        printf("Multiplication: %.2lf\n", a * b);
    } else if (choice == 4) {
        printf("Enter 1 for Quotient or 2 for Remainder: ");
        scanf("%d", &c);

        if (c == 1) {
            if (b == 0) {
                printf("Quotient: 0\n");
            } else {
                printf("Quotient: %.0lf\n", a / b);
            }
        } else if (c == 2) {
            if (b == 0) {
                printf("Remainder: %.0lf\n");
            } else {
                double remainder = a - ((int)(a / b) * b);
                printf("Remainder: %.0lf\n", remainder);
            }
        } else {
            printf("Invalid choice for Quotient or Remainder.\n");
        }
    } else {
        printf("Invalid choice. Please select a valid option (1-4).\n");
    }

    return 0;
}