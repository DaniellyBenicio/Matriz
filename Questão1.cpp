/*Dada a matriz A abaixo, calcule a matriz transposta:
A = [1, 2, 3],
	[4, 5, 6],
	[7, 8, 9]]
*/

#include <stdio.h>
#include <locale.h>

#define T_LIN 3
#define T_COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Matriz transposta\n\n");
			
	int valor[T_LIN][T_COL];
	int lt = T_LIN, ct = T_COL;
	int matriz_transposta[lt][ct];
	
	
	for(int i = 0; i<T_LIN; i++){//linhas
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor[%d][%d]: ", i, j);//colunas
			scanf("%d", &valor[i][j]);
		}	
	}
	
	printf("\nMatriz Original\n");
	for(int i = 0; i<T_LIN; ++i){	//controla as colunas 
		for(int j = 0; j < T_COL; ++j){
			printf("%.1d\t", valor[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i<lt; ++i){	//controla as colunas 
		for(int j = 0; j < ct; ++j){
			matriz_transposta[i][j] = valor[j][i];
		}
	}
	
	printf("\nMatriz transposta:\n\n");
	for(int i = 0; i<T_LIN; i++){//linhas
		for(int j=0; j<T_COL; j++){
			printf("%.1d\t", matriz_transposta[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}
