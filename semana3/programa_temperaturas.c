/*Creado el 20 de agosto del 2018por Paloma Medina */
#include <stdio.h>
          int main()
{    
         float c,k,f;
         printf("Introduzca los grados °C para convertirlos a K Y °F \n");
         scanf("%f %f %f", &c, &k, &f);
         k=c+273;
         printf("El valor de k es %f \n", k);
         f=1.8*c+32;
         printf("El valor de f es %f \n" ,f);
         c=(f-32)/ 1.8;
         printf("El valor de c es %f \n" ,c);
         return 0;
}
         
