#include <stdio.h>
int main(){
    float f;
    printf("Enter a number ");
    scanf("%f", &f);
    int x = (int) f;
    float a = (float) x;


    if( f-a == 0 ) printf(" this number is an integer");
    if( f-a > 0 ) printf(" this number is not an integer ");
    
return 0;
}