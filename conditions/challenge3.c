#include <stdio.h>
 
int main()
{
   char let;

   printf("saisie une lettre :");
   scanf("%c", &let);

   switch (let) {

  case 'a': printf ("vous avez saisie un voyelle");
  break ;
  
  case 'o' : printf ("vous avez saisie un voyelle");
  break ;

  case 'e' : printf ("vous avez saisie un voyelle");
  break ;

  case 'i' : printf ("vous avez saisie un voyelle");
  break ;

  case 'u' : printf ("vous avez saisie un voyelle");
  break ;

  case 'A': printf ("vous avez saisie un voyelle");
  break ;
  
  case 'O' : printf ("vous avez saisie un voyelle");
  break ;

  case 'E' : printf ("vous avez saisie un voyelle");
  break ;

  case 'I' : printf ("vous avez saisie un voyelle");
  break ;

  case 'U' : printf ("vous avez saisie un voyelle");
  break ;
   

   default :
       printf("vous avez saisie une consonne");
  
   }

  return 0;
  
}