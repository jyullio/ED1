#include<stdio.h>

void calcular_retangulo(float l1 , float l2 , float *area , float *perimetro){

	(*area) = l1 * l2;

	(*perimetro) = (l1 * 2) + (l2 * 2);
	
}

int main(){

	float area , perimetro;

	calcular_retangulo(10 , 20 , &area , &perimetro);
	
	printf("\narea = %.2f perimetro = %.2f\n" , area  , perimetro);
	
}
