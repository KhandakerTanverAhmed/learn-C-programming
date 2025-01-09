#include <stdio.h>

int main() {
    int x, y, incremented, decremented;

    printf("Enter the values of X and Y: ");
    scanf("%d %d", &x, &y);

    incremented = x + y;
    decremented = x - y;

    printf("Incremented Value: %d\n", incremented);
    printf("Decremented Value: %d\n", decremented);

    return 0;
}
