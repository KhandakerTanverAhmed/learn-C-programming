#include <stdio.h>
int main (){
    int x;
    printf(" Enter a positive integer x ");
    scanf("%d", &x);

    int y;
    printf(" Enter a positive integer y ");
    scanf("%d", &y);

    int z;
    printf(" Enter a positive integer z ");
    scanf("%d", &z);

    if(x<y && x<z) printf (" x is lower than all ");

    if(y<x && y<z) printf (" y is lower than all ");

    if(z<x && z<y) printf (" z is lower than all ");

    return 0;

}