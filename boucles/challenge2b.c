#include <stdio.h>
#include <math.h>

int main()
{

    int x, S, star, i;


printf("saisire le nombre de ligne :");
scanf("%d", &x);

for(i=1; i<=x; i++ ){
    for(S = 0; S <x-i; S++){
      printf(" ");
    }
    for(star=0; star< i*2-1; star++){
      printf("*");
    }
     printf("\n");
}

    return 0;
 }
