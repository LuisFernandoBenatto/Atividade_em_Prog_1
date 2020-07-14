#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define LINHAS 4
#define COLUNAS 4

int existePosicoesVagas(int matriz[LINHAS][COLUNAS]);
void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

int main(){

    int matriz[LINHAS][COLUNAS] = {0};
    int i, j, aux;

    do{
       imprimirMatriz(matriz);
       printf("Digite a posicao de valor: \n");
       scanf("%d %d", &i, &j);
       if(i < LINHAS && j < COLUNAS){
            printf("Digite um valor a ser salvo: \n");
            scanf("%d", &matriz[i][j]);
            imprimirMatriz(matriz);
       }else{
            printf("A posicao informada nao existe!\n");
       }
    }while(existePosicoesVagas(matriz));


    system("pause");
    return 0;
}

int existePosicoesVagas(int matriz[LINHAS][COLUNAS]){

    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            if(matriz[i][j] == 0){
                return 1;
            }
        }
    }
    return 0;
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]){
    system("cls");
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
                printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}
