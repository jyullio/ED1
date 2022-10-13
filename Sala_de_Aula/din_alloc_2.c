#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int qtd_alunos;
	float *notas_alunos , sum_notas = 0;
	int i;

	printf("digite a quantidade de alunos:");
	scanf("%d" , &qtd_alunos);

	
	notas_alunos = (float *)malloc(sizeof(float) * qtd_alunos);

	printf("\n");
	for(i = 0 ; i < qtd_alunos ; i++){
		printf("digite a nota do aluno[%d] = " , i);
		scanf("%f" , &notas_alunos[i]);
	}

	for(i = 0 ; i < qtd_alunos ; i++){
		sum_notas += notas_alunos[i];
	}	

	printf("\nmedia = %.2f\n" , sum_notas / qtd_alunos);

	free(notas_alunos);
	


	return 0;
}
