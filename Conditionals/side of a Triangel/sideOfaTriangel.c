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

     if(x+y>z && y+z>x && z+x>y ) printf (" x,y,z is a triangel");
     else printf (" x,y,z is not a triangel ");
     
     return 0;

}