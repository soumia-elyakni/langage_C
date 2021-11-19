#include <stdio.h>
#include <stdlib.h>

int main () 
{
int A;
int B;
int C;
int D;
printf("saisissez la valeur A\n");
scanf("%d ",&A);
printf("saisissez la valeur B \n");
scanf("%d ",&B);
printf("saisissez la valeur C \n");
scanf("%d ",&C);
printf("saisissez la valeur D \n");
scanf("%d ",&D);
printf("la somme des valeurs A, B, C et D est : %d \n", A + B + C + D);
printf("la moyenne est %d",(A+ B+ C+ D)/4);

return 0;
}