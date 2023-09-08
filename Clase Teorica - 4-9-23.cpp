#include <iostream>
#include <conio.h>
#include <math.h>


/*
int I=3;

int main() {
	
	int I, Cub;
	
	for(I=1;I<=10;I++){
		
		Cub = pow(::I,3);
		printf ("\nEl cubo de %d es : \t%d",I,Cub);
		
	}
}
*/

/*
int f1(void);
int f2(void);
int f3(void);
int f4(void);
int K=3;

int main (void){
	
	int I;
	for (I=1;I<=3;I++){
		
		printf("\nEl resultado de f1 que usa variables globales es: \t%d",f1());
		printf("\nEl resultado de f2 que usa variables locales es: \t%d",f2());
		printf("\nEl resultado de f3 que usa variables estáticas es: \t%d",f3());
		printf("\nEl resultado de f4 que usa v. locales y globales es: \t%d",f4());
		printf("\n\n");
	}

	
}
int f1 (void){
	
	return K+=K;
}
int f2 (void){
	
	int K=1;
	return K+=K;
}
int f3 (void){
	
	static int K=1;
	return K+=K;
}
int f4 (void){
	
	int K=1;
	return K+=::K;
}
*/

/*
int cubo (int);
int main (void){
	
	int I;
	for (I=1;I<=10;I++){
		
		printf("\n El cubo de %d es: \t%d",I,cubo(I));
		
	}
	
}

int cubo (int I){
	
	return (I*I*I);
}
*/


int main(){
	
	char p1,p2,p3='s';
	
	printf("\nIgrese un caracter: ");
	
	p1=getchar();
	
	putchar(p1);
	
	fflush(stdin);
	
	printf("\nEl caracter p3 es: ");
	
	putchar(p3);
	
	fflush(stdin); printf("\nIngrese otro caracter: ");
	scanf("%c",&p2);
	printf("El caracter ingresado es: %c", p2);
	return 0;
	
}
