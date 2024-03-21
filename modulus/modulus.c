#include <stdio.h>
int main (){
    int x;
    printf("first number is ");
    scanf("%d", &x);
    int y;
    printf("second number is ");
    scanf("%d", &y);
    int sum = x%y;
    printf("reminder %d", sum);
    

return 0;
}