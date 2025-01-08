#include <stdio.h>

int main() {
    int uninitializedVariable;
    int initializedVariable = 10;
    int var1 = 1, var2 = 2, var3 = 3;
    int x = 5, y = 5, z = 5;

    printf("Uninitialized variable (garbage value): %d\n", uninitializedVariable);
    printf("Initialized variable: %d\n", initializedVariable);
    printf("Multiple variables with different values: %d, %d, %d\n", var1, var2, var3);
    printf("Multiple variables with the same value: %d, %d, %d\n", x, y, z);

    return 0;
}

