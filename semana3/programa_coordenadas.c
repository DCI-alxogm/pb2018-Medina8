/*creado el 20 de agosto del 2018 por Paloma Medina*/
#include<stdio.h>
#include<math.h>
        int main()
{
       double x,y,z,a,b,c;
       printf("Introduzca a continuacion los 3 valores de las coordenadas cartesianas \n");
       scanf("%lf %lf %lf", &x,&y,&z);
       a=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
       printf("El valor de a=sqrt(pow(x,2)+pow(y,2)+pow(z,2)) es %lf \n" ,a);
       b=atan(sqrt(pow(x,2)+pow(y,2))/z);
       printf("El valor de b=atan(sqrt(pow(x,2)+pow(y,2))/z) es %lf \n" ,b);
       c=atan(y/x);
       printf("El valor de c=atan(y/x)es %lf \n" ,c);
       return 0;
}
