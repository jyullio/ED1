#include<stdio.h>

void troca (int *i, int *j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}

int main(){

	int a = 2 , b = 3;
	troca(&a , &b);
	printf("\na = %d , b = %d\n" , a , b);
	
}
