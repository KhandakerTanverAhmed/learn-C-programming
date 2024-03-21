#include <stdio.h>
int main (){
    int x;
    printf(" Enter a positive integer ");
    scanf("%d", &x);

     if( (x%5==0 || x%3==0) && x%15!=0 ) printf("divisible by 5 or 3 but not divisible by 15");
     else printf("not divisible by 5 or 3 but divisible by 15");

    return 0;
}