/*Dada a matriz A abaixo, calcule a matriz identidade:
A = [[1, 2],
	[3, 4]]
*/

#include <stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculando a Matriz identidade\n\n");
			
	float mat[T_LIN][T_COL];
	float det_mat, dp = 1, ds = 1;
	float id[T_LIN][T_COL];
	float inversa[T_LIN][T_COL];
		
	for(int i = 0; i<T_LIN; i++){//valores da matriz
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor[[%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz Original\n");//mostra a matriz 
	for(int i = 0; i<T_LIN; ++i){
		for(int j = 0; j<T_COL; ++j){
			printf("%.1f\t", mat[i][j]);
		}
		printf("\n");
	}

	printf("\nA matriz identidade é: \n");
	for(int i = 0; i<T_LIN; i++){
		for(int j = 0; j <T_COL; j++){
			if(i==j){
				id[i][j] = 1;
			} else{
				id[i][j] = 0;
			}
		}
	}
	
	for(int i = 0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			printf("%.0f\t", id[i][j]);
		}
		printf("\n");
	}

	return 0;
}
