#include <stdio.h>
int main (){
    int x;
    printf(" Enter a positive integer ");
    scanf("%d", &x);

     if( x%5==0 && x%3==0) printf("divisible by 5 or 3");
     else printf("not divisible by 5 or 3");
    return 0;
}