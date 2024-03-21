#include <stdio.h>
int main(){
    int x;
    printf(" Enter persentage ");
    scanf("%d", &x);

    // if ( x>=81 && x<=100 ) printf (" very good ");
    // if ( x>=61 && x<=80 ) printf (" good ");
    // if ( x>=41 && x<=60 ) printf (" average ");
    // if ( x<=40 ) printf (" fail ");

    // if(x>=81) printf (" very good ");
    // else {
    //     if(x>=61) printf (" good ");
    //     else {
    //         if (x>=41) printf (" average ");
    //         else {
    //             printf (" fail ");
    //         }

    //     }
    // }

       if(x>=81) printf (" very good ");
       else if (x>=61) printf (" good ");
       else if (x>=41) printf (" average ");
       else      printf (" fail ");

    
return 0;
}