#include <stdio.h>
int main(){
    int x;
    printf("the number is ");
    scanf("%d", &x);

    if(x>0) printf("x is a positive number ");
    if(x<0) printf("x is a negative number ");
    if(x==0) printf(" the number is 0 ");
    
return 0;
}