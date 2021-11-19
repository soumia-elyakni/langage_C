#include <stdio.h>
#include <math.h>


int main() {

int nbr;
int a, b, c;
int bc, cba;

printf("saisissez un nombre de trois chiffre");
scanf("%d", &nbr);

a = nbr / 100 ;
bc = nbr % 100 ;
b = bc / 10 ; 
c = bc % 10 ;
cba = (c*100) + (b*10) + a ;

printf("l'iverse de ce chiffre est : %d", cba);


 return 0;
}