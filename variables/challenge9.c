#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
    float  x1 , y1, x2 , y2 , MN ;
    float X, Y ;

printf("saisissez x1 du point M: \n");
scanf("%f", &x1);
printf("saisissez y1 du point M: \n");
scanf("%f", &y1);

printf("saisissez x2 du point N: \n");
scanf("%f", &x2);
printf("saisissez y2 du point N: \n");
scanf("%f", &y2);

X = x2 - x1;
Y = y2 - y1;
MN = sqrt( pow (X,2) + pow(Y,2));

printf("la distance entre les deux point M et N est: %f",MN );


return 0;

}