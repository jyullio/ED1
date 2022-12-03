#include<stdio.h>

#define QTD_PESSOAS 10

struct pessoa_cfg{

	int idade;
	char sexo;
	float salario;
	int numero_de_filhos;
	
};


int main(){

	int i;
	struct pessoa_cfg vet_pessoas[QTD_PESSOAS];
	

	for(i = 0 ; i < QTD_PESSOAS ; i++){
		
		printf("idade, pessoa[%d]:" , i);
		scanf("\n%d" , &(vet_pessoas[i].idade));

		printf("sexo, pessoa[%d]:" , i);
		scanf("\n%c" , &(vet_pessoas[i].sexo));

		printf("salario, pessoa[%d]:" , i);
		scanf("\n%f" , &(vet_pessoas[i].salario));

		printf("numero de filhos, pessoa[%d]:" , i);
		scanf("\n%d" , &(vet_pessoas[i].numero_de_filhos));

		printf("\n");
		
	}

	float sum_salarios = 0;
	for(i = 0 ; i < QTD_PESSOAS ; i++){
		sum_salarios += vet_pessoas[i].salario;
	}

	printf("\nmedia salarios = %.2f\n" , sum_salarios / QTD_PESSOAS);
	
	return 0;
}
