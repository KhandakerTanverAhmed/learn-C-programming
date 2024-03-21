#include <stdio.h>
int main(){
    int x;
    printf("The positive integer is ");
    scanf("%d", &x);

    // if( x % 2 == 0 ) printf("Even Number");
    // if( x % 2!= 0 ) printf("Odd Number");

    ( x % 2 == 0 ) ? printf("Even Number") : printf("Odd Number");
    
return 0;
}