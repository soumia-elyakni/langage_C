#include <stdio.h>
#include <math.h>
int main()
{
   int a;
   int b;
   int res;


   printf("saisissez le premier nombre :\n");
   scanf("%d", &a);
   printf("saisissez le deuxieme nombre :\n");
   scanf("%d", &b);
   
   res = a + b ;

  if(a == b)
  {
   printf("Woow vous avez saisie deux nombres identiques voila donc le triple de leur somme : %d", 3*res);   
  }

  else 
  {
  printf("la somme des nombres que vous avez saisi est : %d", res);
  }

  return 0;
  
}