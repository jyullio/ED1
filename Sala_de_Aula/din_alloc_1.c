#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int n;
	int i , *vet;
	
	printf("quantidade de num: ");
	scanf("%d" , &n);

	vet = (int *)malloc(sizeof(int) * n);
	
	for(i = 0 ; i < n ; i++){
		vet[i] = (rand() % 100) + 1;//1-100
	}

	printf("\nvet:");
	for(i = 0 ; i < n ; i++){
		printf(" %d " , vet[i]);
	}

	printf("\nvalores pares:");
	for(i = 0 ; i < n ; i++){
		if(vet[i] % 2 == 0)
			printf(" %d " , vet[i]);
			
	}
	printf("\n");
	

	return 0;
}
