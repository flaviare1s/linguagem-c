#include <stdio.h>
#include <string.h>

int main() {
	/*char nome[20], cidade[20], telefone[20];
	int idade;
	
	printf("Digite seu nome:\n");
	gets(nome);
	
	printf("Digite sua cidade:\n");
	gets(cidade);
	
	printf("Digite seu telefone:\n");
	gets(telefone);
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Seu nome e %s, voce tem %d anos, mora na cidade %s e seu telefone e %s.", nome, idade, cidade, telefone);*/
	
	/*char st1[50], st2[10], st3[10], st4[10];
	
	printf("Digite a primeira palavra:\n");
	gets(st1);
	printf("Digite a segunda palavra:\n");
	gets(st2);
	printf("Digite a terceira palavra:\n");
	gets(st3);
	printf("Digite a quarta palavra:\n");
	gets(st4);
	
	strcat(st1, st2);
	strcat(st1, st3);
	strcat(st1, st4);
	
	printf("%s", st1);*/
	
	/*char palavra[10];
	int indice;
	
	printf("Digite uma palavra de ate 10 letras: \n");
	gets(palavra);
	
	printf("Digite um numero inteiro menor do que a quantidade de letras da palavra digitada: \n");
	scanf("%d", &indice);
	
	printf("No indice %d esta armazenado o caractere %c", indice, palavra[indice]);*/
	
	/*char st1[20], st2[20], st3[20];
	
	printf("Digite a primeira palavra:\n");
	gets(st1);
	printf("Digite a segunda palavra:\n");
	gets(st2);
	printf("Digite a terceira palavra:\n");
	gets(st3);
	
	printf("%d\n", strlen(st1));
	printf("%d\n", strlen(st2));
	printf("%d\n", strlen(st3));*/
	
	/*int A, B, C;
	
	printf("Digite 3 numeros inteiros: \n");
	scanf("%d %d %d", &A, &B, &C);
	
	if(A + B < C) {
		printf("A soma de A + B e menor do que C.\n");
	} else {
		printf("A soma de A + B e maior do que C.\n");
	}*/
	
	/*int numero;
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &numero);
	
	if(numero % 2 == 0) {
		printf("PAR");
	} else {
		printf("IMPAR");
	}*/
	
	/*int A, B, C;
	
	printf("Digite 2 numeros inteiros: \n");
	scanf("%d %d", &A, &B);
	
	if(A == B) {
		C = A + B;
		printf("%d", C);
	} else {
		C = A * B;
		printf("%d", C);
	}*/
	
	/*int A, B;
	
	printf("Digite 1 numero inteiro: \n");
	scanf("%d", &A);
	
	if(A % 2 == 0) {
		B = A + 5;
		printf("%d", B);
	} else {
		B = A + 8;
		printf("%d", B);
	}*/
	
	/*int numero;
	
	printf("Digite um numero inteiro de 1 a 7: \n");
	scanf("%d", &numero);
	
	switch(numero) {
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;
		case 3:
			printf("Terca");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabado");
			break;
		default:
			printf("Digite um valor valido");
			break;
	}*/
	
	int n1, n2;
	char op;
	
	printf("Digite dois numeros inteiros: \n");
	scanf("%d %d", &n1, &n2);
	
	printf("Digite o operador (+, -, * ou /): \n");
	scanf(" %c", &op);
	
	switch(op) {
		case '+':
			printf("%d", n1 + n2);
			break;
		case '-':
			printf("%d", n1 - n2);
			break;
		case '*':
			printf("%d", n1 * n2);
			break;
		case '/':
			printf("%d", n1 / n2);
			break;
		default:
			printf("Digite um operador valido");
			break;
	}
	}