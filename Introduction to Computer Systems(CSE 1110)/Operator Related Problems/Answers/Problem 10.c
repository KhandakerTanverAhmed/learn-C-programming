#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result_a = (a + b) <= 80;
    int result_b = !(a + c);
    int result_c = (a != 0);

    printf("a) %d\n", result_a);
    printf("b) %d\n", result_b);
    printf("c) %d\n", result_c);

    return 0;
}