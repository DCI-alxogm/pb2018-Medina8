/*Creado el 16 de agosto de 2018 por Paloma Medina*/
#include<stdio.h>
  int main()
  {
        double a,b,c,d,e;
        printf("Introduzca 4 numeros reales \n");
	scanf("%lf %lf %lf %lf", &a, &b, &c,&d);
        e=(a+b)*c/d;
	printf("El valor de la operacion e=(a+b)*c/d es %lf \n", e);
	e=((a+b)*c)/d;
	printf("El valor de la operacion e=((a+b)*c)/d es %lf \n", e);
        e=(a+b)*c/d;
        printf("El valor de la operacion e=(a+b9*c/d es %lf \n" , e);
	e=a+(b*c)/d;
	printf("El valor de la operacion e=a+(b*C)/d es %lf \n" ,e);

        return 0;
  }	

