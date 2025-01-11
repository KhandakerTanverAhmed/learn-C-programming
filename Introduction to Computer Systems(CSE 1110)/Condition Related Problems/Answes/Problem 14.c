#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Enter two numbers (a, b): ");
    scanf("%f %f", &a, &b);

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Addition: %.2f\n", a + b);
    }
    else if (choice == 2) {
        printf("Subtraction: %.2f\n", a - b);
    }
    else if (choice == 3) {
        printf("Multiplication: %.2f\n", a * b);
    }
    else if (choice == 4) {
        if (b == 0) {
            printf("Error: Divisor is zero\n");
            return 1;
        } else {
            int case_choice;
            printf("Enter your Case (1 for Quotient, 2 for Remainder): ");
            scanf("%d", &case_choice);

            if (case_choice == 1) {
                printf("Quotient: %.2f\n", a / b);
            } else if (case_choice == 2) {
                int remainder = (int)a % (int)b;
                printf("Remainder: %d\n", remainder);
            } else {
                printf("Invalid Case Choice\n");
            }
        }
    }
    else {
        printf("Invalid Choice\n");
    }

    return 0;
}