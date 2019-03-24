#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main(){
	
	//Coeficientes
	double a0,a,b,c,p,q,dis,u,v,k[3],R[3],o;
	
	//inicio contador general
	int i;
	
	
	//inicio programa
	for(i = 0 ;i < 3 ; i++){
		k[i]=i;
	}
	printf("Resolucion de una cubica de la forma ax^3+bx^2+cx+d=0 \n");
	printf("4\n");
	printf("Introduzca el  primer coeficiente \n");
	scanf("%lf", &a0);
	printf("Introduzca el segundo coeficiente  \n");
	scanf("%lf", &a);
	printf("Introduzca el tercer coeficiente\n");
	scanf("%lf", &b);
	printf("Introduzca el cuarto coeficiente\n");
	scanf("%lf", &c);

	printf("Su Ecuacion es: %.0f x^3+%.0f x^2+%.0f x+%.0f = 0 \n", a0,a,b,c);
	printf("\n");
	
	//Valores de p y q
	p=  ((3*b)-pow(a,2))/3 ;
	q = ( ( 2* pow(a,3)) - (9*a*b) + 27*c )/27;
	printf("P = %.0f y Q = %.0f\n" ,p,q);
	
	//Discriminante
	dis = pow(q/2,2) + pow(p/3,3)  ;
	printf("\nEl discriminante es = %.0f\n" , dis); 
	
	//Condicionales
	if(dis<0){
		o = acos( (-q/2)/(sqrt(-pow( p/3,3))));
		printf("\nAngulo %f",o);
		printf("\n");
		for(i=0;i<3;i++){
			
			R[i] = (2*sqrt(-p/3) *cos( (o + 2*k[i]*PI)/3)) - (a/3);
			printf("\nX = %f",R[i]);
			
			
		}
		
	}
	
		



//Condiciones para ver si tiene valor real o no
//No arreglos de vectores

	
	
	
	return 0;
}
