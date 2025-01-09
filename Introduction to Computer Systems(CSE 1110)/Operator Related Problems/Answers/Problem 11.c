#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int result1 = ((a + b) <= 80) && (b >= 0);
    int result2 = ((a - b) == 0) || !(c); 
    int result3 = (a != b) || ((b < a) && (c > 0));

    printf("1) %d\n", result1);
    printf("2) %d\n", result2);
    printf("3) %d\n", result3);

    return 0;
}