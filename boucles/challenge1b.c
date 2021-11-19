#include <stdio.h>
#include <math.h>

int main()
{


     
    int i , nbr;
     
     
    printf("saisissez un nombre  \n");
     
    scanf("%d", &nbr);
     
		for (i = 1 ; i <= 10 ; i++){
				printf("la table de multiplication du %d : \n" , nbr);
	            printf("%d * %d = %d", nbr, i, nbr*i );
	    	}
             
         
    return 0;
 }