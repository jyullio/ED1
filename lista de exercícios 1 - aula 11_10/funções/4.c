#include<stdio.h>

void mostrar_categoria(int idade){

	printf("\n");
	if(idade >= 5 && idade <= 7)
		printf("infantil A");
	else if(idade >= 8 && idade <= 10)
		printf("infantil B");
	else if(idade >= 11 && idade <= 13)
		printf("juvenil A");
	else if(idade >= 14 && idade <= 17)
		printf("juvenul B");
	else if(idade >= 18)
		printf("adulto");

	printf("\n");
}

int main(){

	int idade;
	
	printf("digite uma idade:");
	scanf("%d" , &idade);

	mostrar_categoria(idade);

	return 0;
}
