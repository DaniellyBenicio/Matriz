/*dada a matrix A abaixo, calcule o determinante:
A [2,3]
  [1,4]
*/
#include <stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Determinante da matriz\n\n");
			
	int mat[T_LIN][T_COL];
	int d, dp = 1, ds = 1;
		
	for(int i = 0; i<T_LIN; i++){//linhas
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor na posição [%d][%d]: ", i, j);//colunas
			scanf("%d", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz\n");
	for(int i = 0; i<T_LIN; ++i){	//controla as colunas 
		for(int j = 0; j < T_COL; ++j){
			printf("%.1d\t", mat[i][j]);
		}
		printf("\n\n");
	}
	
	for(int i = 0;i < T_LIN; i++){
		for(int j = 0; j < T_COL; j++){
			if(i==j){
				dp*= mat[i][j];
			}
			if(j==(T_COL-1) - i){
				ds*= mat[i][j];
			}
		}
	}
	
	d = dp - ds;
	
	printf("O determinante da matriz é: %d", d);
	
	return 0;
}


