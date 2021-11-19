#include <stdio.h>


int main() {

float Lar ;
float Log ;

printf ("Saisissez la largeur du rectangle \n");
scanf ("%f", &Lar);
printf("saisissez la longueur du rectangle \n");
scanf("%f", &Log);

printf ("La Circonference du rectangle est %f", (Lar+Log)*2);


 return 0;
}