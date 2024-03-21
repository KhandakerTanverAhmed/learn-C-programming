#include <stdio.h>
int main(){
    int x;
    printf("the positive number is ");
    scanf("%d", &x);

    if( x % 5 ==0) printf("x is divisible by 5");
    if( x % 5!=0)  printf("x is not divisible by 5");
    
return 0;
}