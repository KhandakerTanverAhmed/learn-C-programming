#include <stdio.h>
#include <math.h>

int main() {
    float x;
    scanf("%f", &x);
    if(x<0)
    {
        x = -x;
    }

    int A = ceil(x);
    int B = floor(x);
    float C = fabs(x);

    printf("A = %d, B = %d, C = %.1f\n", A, B, C);

    return 0;
} 