#include <stdio.h>
int main(){
    int x;
    printf(" Enter a Number ");
    scanf("%d", &x);

    if( x > 99 && x < 1000 ) printf("This is a three digit Number");
    else printf("This is not a three digit Number");
    
    
return 0;
}