#include <stdio.h>
#include <stdlib.h>


int main() {
//	int i, j, mat[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}}, soma = 0;
//	
//	for(i = 0; i < 4; i++) {
//		for(j = 0; j < 4; j++) {
//			if(mat[i][j] > 10) {
//				soma += 1;
//			}
//		}
//	}
//	
//	printf("A matriz possui %d valores maiores do que 10", soma);



//	int i, j, mat1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, mat2[3][3] = {{10,11,12}, {13,14,15}, {16,17,18}}, mat3[3][3];
//	
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 3; j++) {
//			mat3[i][j] = mat1[i][j] * mat2[i][j];
//		}
//	}
//	
//		for(i = 0; i < 3; i++) {
//		for(j = 0; j < 3; j++) {
//			printf("Valor mat3[%d][%d] = %d\n", i, j, mat3[i][j]);
//		}
//	}



//	int i, j, mat[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}, soma = 0;
//		
//		for(i = 0; i < 3; i++) {
//			for(j = 0; j < 4; j++) {
//				if (i == 2) {
//					soma = soma + mat[i][j];
//				}
//			}
//			printf("A soma dos elementos da terceira linha e: %d", soma);
//		}



//	int i, j, mat[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}}, soma = 0;
//	
//	for(i = 0; i < 3; i++) {
//		for(j = 0; j < 4; j++) {
//			if (j == 1) {
//				soma = soma + mat[i][j];
//			}
//		}
//		printf("A soma dos elementos da segunda coluna e: %d", soma);
//	}




	int i, j, mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, vet[3] = {1,2,3};
	int multiplicacao[3] = {0,0,0};
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
				multiplicacao[j] += vet[i] * mat[i][j];
			}
		}
	
	printf("A multiplicacao do vetor pelas colunas da matriz e:\n");
    for (j = 0; j < 3; j++) {
        printf("%d ", multiplicacao[j]);
    }
    printf("\n");
	
	return 0;
}
