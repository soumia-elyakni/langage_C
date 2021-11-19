#include <stdio.h>

int main()
{
   int nbr;

   printf("saisie un nombre :");
   scanf("%d", &nbr);

  if(nbr%2 == 0)
  {
   printf("paire");   
  }

  else (nbr%2 == 1);
  {
  printf("Impaire");
  }

  return 0;
  
}