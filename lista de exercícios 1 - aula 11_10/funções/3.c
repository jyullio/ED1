#include<stdio.h>

int encontrar_menor_valor(int num1 , int num2){

	if(num1 < num2)
		return num1;
	else
		return num2;
	
}

int main(){

	int num1 , num2;
	
	printf("digite o primeiro numero:");
	scanf("%d" , &num1);

	printf("digite o segundo numero:");
	scanf("%d" , &num2);

	printf("\nmenor valor = %d\n" , encontrar_menor_valor(num1 , num2));

	return 0;
}
