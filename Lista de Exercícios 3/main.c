#include <stdio.h>
#include <stdlib.h>

int main() {
//	int i, valor, soma = 0;
//	
//	for(i = 0; i < 7; i++) {
//		printf("Digite o %d.o valor:\n", i + 1);
//		scanf("%d", &valor);
//		soma = soma + valor;
//	}
//	printf("Soma dos valores digitados: %d\n", soma);



//	int array[6];
//	int i, somaPares = 0, somaImpares = 0;
//	
//	for(i = 0; i < 6; i++) {
//		printf("Digite o %d.o valor:\n", i + 1);
//		scanf("%d", &array[i]);
//	}
//	
//		for(i = 0; i < 6; i++) {
//			if(array[i] % 2 == 0) {
//				somaPares = somaPares + 1;
//		} else {
//				somaImpares = somaImpares + 1;
//		}
//	}
//	
//	printf("Quantidade de valores pares: %d\n", somaPares);
//	printf("Quantidade de valores impares: %d\n", somaImpares);



//	int idades[6];
//	int i, somaIdades = 0, somaMaiorQue18 = 0, somaMenorQue5 = 0, maiorIdade;
//	float media;
//	
//	for(i = 0; i < 6; i++) {
//		printf("Digite a idade da %d.a pessoa:\n", i + 1);
//		scanf("%d", &idades[i]);
//		somaIdades = somaIdades + idades[i];
//		if(idades[i] > 18) {
//			somaMaiorQue18 = somaMaiorQue18 + 1;
//		}
//		if(idades[i] < 5) {
//			somaMenorQue5 = somaMenorQue5 + 1;
//		}
//		if(i == 0 || maiorIdade < idades[i]) {
//			maiorIdade = idades[i];
//		}
//	}
//	
//	printf("Soma das idades: %d\n", somaIdades);
//	
//	media = somaIdades / 6.0;
//	
//	printf("Media das idades: %.2f\n", media);
//	printf("Total de pessoas com mais de 18 anos: %d\n", somaMaiorQue18);
//	printf("Total de pessoas com menos de 5 anos: %d\n", somaMenorQue5);
//	printf("Maior idade digitada: %d\n", maiorIdade);



//	int i, valor, soma = 0;
//	
//	for(i = 0; valor != 1111; i++) {
//		printf("Digite um valor inteiro ou digite 1111 para encerrar:\n");
//		scanf("%d", &valor);
//		soma = soma + valor;
//	}
//	
//	printf("A soma dos valores digitados foi:%d\n", soma - 1111);



	int i, valores[10];
	
	for(i = 0; i < 10; i++) {
		printf("Digite o %d.o valor:\n", i + 1);
		scanf("%d", &valores[i]);
	}
	
		for(i = 0; i < 10; i++) {
			if(valores[i] < 5) {
				printf("Valor: %d no indice: %d\n", valores[i], i);
		} 
	}
	
	return 0;
}
