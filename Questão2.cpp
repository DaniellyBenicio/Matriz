/*Multiplique as matrizes A e B abaixo:
A =[1, 2],
   [3, 4]
B = [5, 6],
    [7, 8]
*/

#include <stdio.h>
#include <locale.h>
#define Ac 2
#define Al 2
#define Bc 2
#define Bl 2
 
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Multiplicação de matrizes\n\n");
	
	int A[Al][Ac], B[Bl][Bc];
	int C[Al][Bc];
	
	for(int i=0; i<Al; i++){
		for(int j=0; j<Ac; j++){
			printf("Informe o valor de A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(int i=0; i<Bl; i++){
		for(int j=0; j<Bc; j++){
			printf("Informe o valor de B[%d][%d]: ", i, j);
			scanf("%d", &B[i][j]);
		}
	}
	
	printf("Matriz A:\n");
	for(int i=0; i<Al; i++){
		for(int j=0; j<Ac; j++){
			printf("%.1d\t", A[i][j]);
		}
		
		printf("\n\n");
	}
	
	printf("\nMatriz B:\n");
	for(int i=0; i<Bl; i++){
		for(int j=0; j<Bc; j++){
			printf("%.1d\t", B[i][j]);
		}
		
		printf("\n\n");
	}
	
	for(int i = 0; i<Al; i++){
		for(int j = 0; j<Bc; j++){
			C[i][j] = 0;
			for(int k=0; k<Ac; k++){
				C[i][j]+= A[i][k] * B[k][j];				
			}
		}
	}
	
	printf("\nMatriz C(AxB):\n");
	for(int i=0; i<Al; i++){
		for(int j=0; j<Bc; j++){
			printf("%.1d\t", C[i][j]);
		}
		
		printf("\n\n");
	}
	
	return 0;
}

