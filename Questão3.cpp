/*dada a matrix A abaixo, calcule a matriz inversa:
A [1,2]
  [3,4]
*/

#include <stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculando a Matriz Inversa\n\n");
			
	float mat[T_LIN][T_COL];
	float det_mat, dp = 1, ds = 1;
	float id[T_LIN][T_COL];
	float inversa[T_LIN][T_COL];
		
	for(int i = 0; i<T_LIN; i++){//linhas
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor[%d][%d]: ", i, j);//colunas
			scanf("%f", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz Original\n");
	for(int i = 0; i<T_LIN; ++i){	//controla as colunas 
		for(int j = 0; j<T_COL; ++j){
			printf("%.1f\t", mat[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i<T_LIN; i++){//for para o determinante 
		for(int j = 0; j<T_COL; j++){
			if(i==j){
				dp*= mat[i][j];
			}
			if(j==(T_COL-1) - i){
				ds*= mat[i][j];
			}
		}
	}
	
	det_mat = dp - ds;
		
	if(det_mat == 0){//nesse if é calculado se o determinante é igual a zero, se for, não tem inversa, pois todo numero x 0 e 0.
	    printf("\nDeterminante é igual a zero. Logo, não possui matriz inversa!\n\n");
	    return 0;
	}
	
	for(int i=0; i<T_LIN; i++){//mostra o determinante
		for(int j=0; j<T_COL; j++){
			inversa[i][j] = mat[i][j]/det_mat;
		}
	}
	printf("\nDeterminante da matriz: %.1f\n", det_mat);
	
	for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			if(j==(T_COL-1)-i){
				inversa[i][j] = -inversa[i][j];
			}
		}
	}
	
	float  aux = inversa[0][0];
	inversa[0][0] = inversa[1][1];
	inversa[1][1] = aux;
	
	printf("\nMatriz inversa: \n");	
	for(int i=0; i<T_LIN; i++){
		for(int j=0; j<T_COL; j++){
			printf("%.1f\t", inversa[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
