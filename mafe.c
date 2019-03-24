#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main(){
	
	//Coeficientes
	double a0,a,b,c,p,q,dis,u,v,k[3],R[3],o,en,im;
	
	//inicio contador general
	int i;
	
	//inicio programa
	for(i = 0 ;i < 3 ; i++){
		k[i]=i;
	}
	printf("Resolucion de una cubica de la forma ax^3+bx^2+cx+d=0 \n");
	printf("3\n");
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
	dis = (pow((q/2),2)) + (pow((p/3),3))  ;
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
		
	}else if(dis==0){
		if(p==q==0){
			double x;
			x = -a/3;
			printf("\nLa Raiz es %f",x);
		}
		
	}else if(dis>0){
		u = pow( (-q/2 + sqrt(dis)), (1.0/3.0));
		v = pow( (-q/2 - sqrt(dis)), (1.0/3.0));
		printf("\nu = %.2f y v = %.2f" , u,v);
		printf("\nX1 = %.2f", (u + v - (a/3)) );
		en = ((-1*((u+v)/2)) - (a/3));
		im = (u-v)*((sqrt(3)) /2);
		printf("\nX2 = %.2f + %.2f i" , en , im);
		printf("\nX2 = %.2f - %.2f i" , en , im);
		
	}
	
		



	
	
	
	return 0;
}
