#include <stdio.h>
#include<stdlib.h>

int main() {

float temp, tempC ;

printf ("Saisissez la temperature en Fehrinheit \n");
scanf ("%f ", &temp);

tempC = (temp-32)/1.8;

if ( tempC <= 10 )
{
printf("tres froid \n");
}
else if( tempC > 10 && tempC <= 25 )
{
printf("froid \n");
}
else if( tempC > 25 && tempC <= 30 )
{
printf("chaud \n");
}
else
{
printf("tres chaud \n");
}

printf ("La temperature en Celsius est %f ", tempC);

 return 0;
}