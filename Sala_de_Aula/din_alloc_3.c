#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float bigger(float *vet , int n){

	int i;
	float bigger = vet[0];

	for(i = 1 ; i < n ; i++){
	
		if(vet[i] > bigger)
			bigger = vet[i];
	}

	return bigger;
}

float smaller(float *vet , int n){

	int i;
	float smaller = vet[0];
	
	for(i = 0 ; i < n ; i++){
	
		if(vet[i] < smaller)
			smaller = vet[i];
	}

	return smaller;
	
}

float sum_vet(float *vet , int n){

	int i;
	float sum = 0;
	
	for(i = 0 ; i < n ; i++){
		sum += vet[i];
	}

	return sum;
	
}



int main(){

	int i , n;
	float *vet;
	
	printf("quantidade de num: ");
	scanf("%d" , &n);

	vet = (float *)malloc(sizeof(float) * n);

	printf("\n");
	for(i = 0 ; i < n ; i++){
		printf("digite o numero[%d] = " , i);
		scanf("%f" , &vet[i]);
	}
	printf("\n");


	printf("maior = %.2f\nmenor = %.2f\nsoma = %.2f\nmedia = %.2f\n" , bigger(vet , n) , smaller(vet , n) , sum_vet(vet , n) , sum_vet(vet , n) / n);
	

	return 0;
}
