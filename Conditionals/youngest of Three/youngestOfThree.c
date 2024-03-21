#include <stdio.h>
int main (){
    int Ram;
    printf(" Enter the age of Ram ");
    scanf("%d", &Ram);

    int Shyam;
    printf(" Enter the age of Shyam ");
    scanf("%d", &Shyam);

    int Ajay;
    printf(" Enter the age of Ajay ");
    scanf("%d", &Ajay);

    if(Ram<Shyam){ 
        if(Ram<Ajay)
            printf (" Ram is the youngest ");
            else printf (" Ajay is the youngest ");
    
    }

    else { 
        if(Shyam<Ajay)
        printf (" Shyam is the youngest ");
        else printf (" Ajay is the youngest");

    }

    return 0;
}