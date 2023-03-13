/*Dada a matriz A abaixo, calcule a matriz diagonal:
A = [2, 0, 1],
	[3, 4, -2],
	[8, 9, 6]
*/

#include <stdio.h>
#include <locale.h>
#define T_LIN 3
#define T_COL 3

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculando a Matriz Diagonal\n\n");
			
	float mat[T_LIN][T_COL];
	float diagonal[T_LIN][T_COL];
			
	for(int i = 0; i<T_LIN; i++){//valores da matriz
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor[[%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz Original\n");//mostra a matriz 
	for(int i = 0; i<T_LIN; ++i){
		for(int j = 0; j<T_COL; ++j){
			printf("%.0f\t", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz Diagonal:\n");
	for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			if(i==j){//se i for igual a j, entao a matriz diagonal recebe os valore da matriz original, caso contrario, recebe tudo 0.
				diagonal[i][j] = mat[i][j];
			} else {
				diagonal[i][j] = 0;
			}
			printf("%.0f\t", diagonal[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
