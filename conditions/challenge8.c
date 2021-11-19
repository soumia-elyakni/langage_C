#include <stdio.h>

 int main ()
 {
     char n ;

     printf ("Please enter a Maj charactere : \n");

     scanf("%c" , &n);
     
    if ( n >65 && n <91) {
        printf("vous avez saisi une lettre MAjiscule");}

    else
     printf("vous avez saisi une lettre miniscule");

    return 0 ;
 }