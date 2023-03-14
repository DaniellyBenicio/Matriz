/*Dada a matriz A abaixo, calcule a matriz cofatora:
A = [2, 3],
	[1, 4]
*/

#include <stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int mat[T_LIN][T_COL];
	int cofatora[T_LIN][T_COL];
	int aux;
	
	printf("Calculando a Matriz Cofatora\n\n");
	
	for(int i = 0; i < T_LIN; i++){
		for(int j = 0; j < T_COL; j++){
			printf("Digite o valor [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nMatriz Original:\n"); 
	for(int i = 0; i < T_LIN; i++) {
	    for(int j = 0; j < T_COL; j++){
	    	printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
  	for(int i = 0; i < T_LIN; i++) {
	    for(int j = 0; j < T_COL; j++) {
	  		cofatora[i][j] = mat[i][j];	
		}
	}
	
	for(int i = 0; i < T_LIN; i++) {
	    for (int j = 0; j < T_COL; j++) {
		  	if(j==(T_COL - 1)- i){
		  		cofatora[i][j] = -cofatora[i][j];
		  	}
	    }
	}
	
	aux = cofatora[0][0];
	cofatora[0][0] = cofatora[1][1];
	cofatora[1][1] = aux;
	
	aux = cofatora[0][1];
	cofatora[0][1] = cofatora[1][0];
	cofatora[1][0] = aux;

	printf("\nMatriz Cofatora: \n");
	for(int i = 0; i < T_LIN; i++) {
	    for(int j = 0; j < T_COL; j++){
	    	printf("%d\t", cofatora[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
