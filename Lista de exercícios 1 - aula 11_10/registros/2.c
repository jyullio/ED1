#include<stdio.h>

#define QTD_ELETRODOMESTICOS 5

struct eletrodomestico_cfg{

	char nome[15];
	float potencia;
	float horas_ligado_por_dia;
	
};

int main(){

	int i;
	int qtd_dias;
	struct eletrodomestico_cfg vet_eletrodomesticos[QTD_ELETRODOMESTICOS];

	for(i = 0 ; i < QTD_ELETRODOMESTICOS ; i++){

		printf("nome do eletrodomestico, eletrodomestico[%d]:" , i);
		scanf("%s" , vet_eletrodomesticos[i].nome);

		printf("potencia do eletrodomestico, eletrodomestico[%d]:" , i);
		scanf("\n%f" , &(vet_eletrodomesticos[i].potencia));

		printf("qtd de horas ligado por dia, eletrodomestico[%d]:" , i);
		scanf("\n%f" , &(vet_eletrodomesticos[i].horas_ligado_por_dia));

		printf("\n");
		
	}

	printf("digite a quantidade de dias:");
	scanf("%d" , &qtd_dias);
	
	for(i = 0 ; i < QTD_ELETRODOMESTICOS ; i++){
		printf("\nconsumo total[%s] = %.2f\n" , vet_eletrodomesticos[i].nome , qtd_dias * vet_eletrodomesticos[i].potencia * vet_eletrodomesticos[i].horas_ligado_por_dia);
	}

	return 0;
}



