#include <stdio.h>
#include <stdlib.h>


int main() {
	float altura = 0;

	printf("Valor inicial da altura:%.2f.\n", altura);

	printf("Qual a sua altura?\n");

	scanf("%f", &altura);

	printf("Sua altura é:%.2f.\n", altura);
}