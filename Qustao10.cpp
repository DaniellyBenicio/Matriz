/*dada a matriz A abaixo, calcule a matriz de reflexão em relação ao eixo y
A = [1,2]
	[3,4}
na matriz de reflexao as colunas são invertidas, logo 1, 2 passa a ser 2,1
*/
#include <stdio.h>
#include <locale.h>
#define T_LIN 2
#define T_COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Calculando a matriz de reflexão em relação ao eixo y\n\n");
	
	int mat[T_LIN][T_COL];
	int reflexao_matriz[T_LIN][T_COL];

	for(int i = 0; i<T_LIN; i++){//informar os valores da matriz
		for(int j=0; j<T_COL; j++){
			printf("Informe o valor[[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}	
	}
	
	printf("\nMatriz Original: \n");//mostra a matriz com seus respectivos valores 
	for(int i = 0; i<T_LIN; ++i){
		for(int j = 0; j<T_COL; ++j){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
		
	for(int i = 0; i < T_LIN; i++){//a nova matriz criada reflexao, vai guardar os valores da matriz de forma inversa
        for(int j = 0; j < T_COL; j++){//ex: quando j for 1, T-COL - 1 - 1, logo 0; se j = 0, fica T_COL - 1 - 0, logo 1.
            reflexao_matriz[i][j] = mat[i][T_COL - 1 - j];//calcula o valor da ultima coluna e subtrai o indice atual para inverter.
	    }
    }

    printf("\nMatriz Reflexão: \n");
    for(int i = 0; i < T_LIN; i++){
        for(int j = 0; j < T_COL; j++){
            printf("%d\t", reflexao_matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
