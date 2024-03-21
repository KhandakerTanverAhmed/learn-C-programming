#include <stdio.h>
int main(){
    int cp;
    printf (" Enter the cost price ");
    scanf ("%d", &cp);

    int sp;
    printf (" Enter the selling price ");
    scanf ("%d", &sp);

    if (cp<sp) printf ("profit is %d", sp-cp );
    if (cp>sp) printf ("loss is %d", cp-sp );50
    
    if (cp==sp) printf ("no profit no loss");

return 0;
}