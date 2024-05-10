Disciplina: Introdução a Programação Estruturada em C
Profª Danielle Amorim
Nome: Flávia Reis de Almeida
4ª Lista de Exercícios – Linguagem C
1. Escreva um algoritmo que receba um número inteiro qualquer, calcule e escreva o seu dobro e o seu triplo.
#include <stdio.h>
int main() {
	int num;
	printf("Digite um número inteiro:\n");
	scanf("%d", &num);
	printf("Dobro:%d.\n", num * 2);
	printf("Triplo:%d.\n", num * 3);
}
2. Fazer um algoritmo em C que solicite 2 números inteiros e informe:
a) A soma dos dois números;
b) O produto do primeiro número pelo quadrado do segundo;
c) O quadrado do primeiro número.
#include <stdio.h>
int main() {
	int num1, num2;	
	printf("Digite um número inteiro:\n");
	scanf("%d", &num1);
	printf("Digite outro número inteiro:\n");
	scanf("%d", &num2);

	printf("Soma:%d.\n", num1 + num2);
	printf("Produto do primeiro pelo quadrado do segundo:%d.\n", num1 * (num2 * num2));
	printf("Quadrado do primeiro número:%d.\n", num1 * num1);
}
3. Escreva um algoritmo que receba dois números reais qualquer, calcule e mostre a média aritmética dos números dados.
#include <stdio.h>
int main() {
	float num1, num2;	
	printf("Digite um número real:\n");
	scanf("%f", &num1);
	printf("Digite outro número real:\n");
	scanf("%f", &num2);
	printf("Media:%.2f.\n", (num1 + num2) / 2);
}
4. Escreva um algoritmo que receba dois números inteiros, calcule e escreva o resto da divisão.
#include <stdio.h>
int main() {
	int num1, num2;
	printf("Digite um número inteiro:\n");
	scanf("%d", &num1);
	printf("Digite outro número inteiro:\n");
	scanf("%d", &num2);
	printf("Resto da divisão:%d.\n", num1 % num2);	
}

5. Escreva um algoritmo que receba dois números inteiros quaisquer e calcule o seu dobro e triplo.
#include <stdio.h>
int main() {
	int num1, num2;
	printf("Digite um número inteiro:\n");
	scanf("%d", &num1);
	printf("Digite um número inteiro:\n");
	scanf("%d", &num2);
	printf("Dobro do primeiro:%d.\n", num1 * 2);
	printf("Triplo do primeiro:%d.\n", num1 * 3);
	printf("Dobro do segundo:%d.\n", num2 * 2);
	printf("Triplo do segundo:%d.\n", num2 * 3);
}
6. Escreva um algoritmo que peça sua idade e depois mostre a tela: Você tem X anos!
#include <stdio.h>
int main() {
	int idade;
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	printf("Você tem %d anos!\n", idade);
}


7. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre a idade dessa pessoa em anos.
#include <stdio.h>
int main() {
	int anoNasc, anoAtual;
	printf("Digite o ano que você nasceu:\n");
	scanf("%d", &anoNasc);
	printf("Digite o ano atual:\n");
	scanf("%d", &anoAtual);
	printf("Sua idade é %d anos.\n", anoAtual - anoNasc);
}
8. Faça um programa que receba uma temperatura em Celsius, calcule e mostre a temperatura em Fahrenheit. Sabe-se que 𝐹 = 180⋅(𝐶+32)/100
#include <stdio.h>
int main() {
	float temperaturaCelsius;
	printf("Digite a temperatura em Celsius:\n");
	scanf("%f", &temperaturaCelsius);	
	printf("Temperatura em Fahrenheit:%.2f.\n", 180 * (temperaturaCelsius + 32) / 100);	
}
9. Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) O novo peso se a pessoa engordar 15% sobre o peso digitado
b) O novo peso se a pessoa emagrecer 20% sobre o peso digitado.
#include <stdio.h>
int main() {
	float peso;
	printf("Digite seu peso:\n");
	scanf("%f", &peso);
	printf("Peso se engordar 15%%: %.2f.\n", peso + (peso * 0.15));
	printf("Peso se emagrecer 20%%: %.2f.\n", peso - (peso * 0.2));
}
10. Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
#include <stdio.h>
int main() {
	float nota1, nota2;	
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota2);
	printf("Media ponderada:%.2f.\n", ((nota1 * 2) + (nota2 *3)) / 5);
}
