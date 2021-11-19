#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int age, M, J, H, m, S, rep;

printf("quel age as-tu ? \n");
scanf("%d", &age);

printf("a quoi voulez-vous convertir votre age? \n 1.Mois \n 2.jours \n 3.Heurs \n 4.minutes \n 5.Secondes");
scanf("%d", &rep);


M = 12*age;
J = 30*M;
H = 24*J;
m = 60*H;
S = 60* m;

switch (rep)
{
case '1' : 
  printf(" vous avez : \n %d Mois " ,M );
    break; 

case '2' : 
  printf(" et : \n %d jours " ,J );
    break; 

case '3' : 
  printf(" et : \n %d Heures " ,H );
    break; 

case '4': 
  printf(" et : \n %d minutes " ,m);
    break; 

case '4': 
  printf(" et : \n %d Secondes " ,S );
    break; 

default:
  printf("RIP");
   
}


 return 0;
}