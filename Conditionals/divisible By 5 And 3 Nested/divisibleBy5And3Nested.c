#include <stdio.h>
int main (){
    int x;
    printf(" Enter a positive integer ");
    scanf("%d", &x);

    if(x%5==0){
        if(x%3==0)
        printf("x is divisible by 5 &3");
        else printf("x is not divisible by 5 &3");
    }
    else printf("x is not divisible by 5 &3");

     
    return 0;
}