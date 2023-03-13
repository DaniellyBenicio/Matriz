/*dada a matriz A abaixo, calcule a matriz de rotação de 90 graus
A = [1,2]
	[3,4}
*/

#include <stdio.h>
#include <locale.h>
#define lin 2
#define col 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Matriz de rotação de 90 graus\n\n");
			
	int mat[lin][col];
	int ib = 0;
	int jb = 0;
	int B[ib][jb];
	
	for(int i = 0; i<lin; i++){//linhas
		for(int j=0; j<col; j++){
			printf("Informe o valor[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz Original\n");
	for(int i = 0; i<lin; ++i){	
		for(int j = 0; j < col; ++j){
			printf("%.1d\t", mat[i][j]);
		}
		printf("\n\n");
	}

	printf("A matriz de rotação de 90 graus\n\n");	
	for(int j = 0; j<col; j++){
		jb=0;
		for(int i = lin-1; i>=0; i--){
			B[ib][jb] = mat[i][j];
			printf("|%d, %d| = %d\t", ib, jb, mat[i][j]);
			jb++;
		}
		printf("\n");
		ib++;
	}
	printf("\n");
	
	return 0;
}
