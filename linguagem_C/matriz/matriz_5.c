#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


void print_matriz(int matriz[5][6]);

int main(){
    int i,j;
    int soma = 0;
    int matriz_C[5][6] = {{1,2,3,4,5},
                          {2,4,6,8,10},
                          {20,10,5,3,1},
                          {3,6,9,12,15}};
                          // J = COLUNAS;
                          // I = LINHAS;
    // começando nas colunas e depois as linhas;
    for(j = 0; j < 6; j++){
        for(i = 0, soma = 0; i < 5; i++){
           matriz_C[5 - 1][j] += soma;
           soma = matriz_C[i][j];
        }
    }
    // começando nas linhas e depois as colunas;
    for(i = 0; i < 5; i++){
        for(j = 0, soma = 0; j < 6; j++){
            matriz_C[i][6 - 1] += soma;
            soma = matriz_C[i][j];
        }
    }

    print_matriz(matriz_C);

    system("pause");
    return 0;
}
void print_matriz(int matriz[5][6]){

    int linha;
    int coluna;

    for(linha = 0; linha < 5; linha++){
        for(coluna = 0; coluna < 6; coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}
