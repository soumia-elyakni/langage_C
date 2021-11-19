#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

float nbr;
    printf("saisissez un nombre");
    scanf("%f", &nbr);

    if(nbr == 0) {
        printf("nul");}

    else if (nbr > 0) {
        printf("le nombre est positif");}

    else 
    printf("le nombre est negatif");

    return 0; 
}