#include <stdio.h>
int main (){
    int x;
    printf(" Enter a Year ");
    scanf("%d", &x);

    // if( x%400==0 || ( x%4==0 && x%100!=0))
    // printf (" x is a leap year ");
    // else printf (" x is not a leap year ");

    ( x%400==0 || ( x%4==0 && x%100!=0)) ? printf (" x is a leap year ") : printf (" x is not a leap year ");

    
    return 0;
}