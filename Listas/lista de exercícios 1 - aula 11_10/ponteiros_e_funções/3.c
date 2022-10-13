#include<stdio.h>

void situacao(float nota1 , float nota2 , float nota3 , float *media){

	(*media) = (nota1 + nota2 + nota3) / 3;
	
}

int main(){

	float nota1 , nota2 , nota3 , media;

	printf("digite primeira nota:");
	scanf("%f" , &nota1);
	printf("digite segunda nota:");
	scanf("%f" , &nota2);
	printf("digite terceira nota:");
	scanf("%f" , &nota3);

	situacao(nota1 , nota2 , nota3 , &media);

	printf("\nmedia = %.2f\n" , media);

	
	
}
