/*Creado el 20 de agosto del 2018 por Paloma Medina */
#include <stdio.h>
#include <math.h>
         int main()
{
         int x,r,p, y;
       printf("Introduzca un un valor para resolver las ecuaciones \n");
       scanf("%i", &x);
       p=3.1415;
       r=(x*p)/180;
       printf("El valor de x es %i \n" , x);
       y=exp(-x);
       printf("El valor de la funcion y=exp(-x) es %i \n" ,y);
       y=cos(x)+2*tan(r/2);
       printf("El valor de la funcion y=cos(x)+2*tan(r/2) es %i \n" , y);
       y=log(x)+3*pow(x,2);
       printf("El valor de la funcion y=ln(x)+3*pow(x,2) es %i \n" ,y);
       return 0; 
} 
       
