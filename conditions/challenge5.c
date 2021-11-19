#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2, x, D ;
    
    
    printf("ax²+bx+c = 0 \n");
    
    printf("donnez la valeur de 'a' \n");
    scanf("%d", &a);
    
    printf("donnez la valeur de 'b' \n");
    scanf("%d", &b);
    
    printf("donnez la valeur de 'c' \n");
    scanf("%d", &c);
    
    D = pow(b,2)-4*a*c ;
    x = (-b)/(2*a) ;
    x1 = ((-b)+sqrt(D))/(2*a) ;
    x2 = ((-b)-sqrt(D))/(2*a) ;
    
    if (D = 0){
         printf("%f",D);
        printf("la valeur de x est : %f \n", x );
        }
    
    else if (D>0){printf("%f",D);
        printf("les valeur possible de x est : %f & %f" , x1, x2);}
    
    else  {
    printf("%f",D);
    printf("impossible d'avoir une solution"); 
    }
    

    return 0;
}