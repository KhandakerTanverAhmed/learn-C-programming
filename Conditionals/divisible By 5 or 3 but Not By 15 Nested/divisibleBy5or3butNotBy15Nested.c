#include <stdio.h>
int main (){
    int x;
    printf(" Enter a positive integer ");
    scanf("%d", &x);

    if (x%15!=0){ 
        if (x%3!=0){
            if (x%5==0) printf (" x is divisible by 5 or 3 but not by 15 ");
            else printf (" Condition invalid  ");

        }
         
        else printf (" x is divisible by 5 or 3 but not by 15 ");
    }
     else printf (" Condition invalid");

    return 0;
}