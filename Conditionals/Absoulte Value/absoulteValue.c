#include <stdio.h>
int main(){
    int x;
    printf("Enter a Number ");
    scanf("%d", &x);

    if(x<0) x = x*(-1);
    printf("The absolute number is %d", x );

return 0;
}