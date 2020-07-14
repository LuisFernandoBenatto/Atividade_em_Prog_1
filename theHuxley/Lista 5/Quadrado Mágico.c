/*Chama-se de quadrado m�gico um arranjo, na forma de um quadrado, de N x N n�meros inteiros tal que todas as linhas, colunas e diagonais t�m a mesma soma.

Por exemplo, o quadrado abaixo

2 7 6

9 5 1

4 3 8

� um quadrado m�gico de soma 15, pois todas as linhas (2 + 7 + 6 = 15, 9 + 5 + 1 = 15 e 4 + 3 + 8 = 15), colunas (2 + 9 + 4 = 15, 7 + 5 + 3 = 15 e 6 + 1 + 8 = 15) e diagonais (2 + 5 + 8 = 15 e 6 + 5 + 4 = 15) t�m a mesma soma (15).

Escreva um programa que, dado um quadrado, determine se ele � magico ou n�o e qual a soma dele (caso seja m�gico).



Formato de entrada

A entrada cont�m um �nico conjunto de testes. A primeira linha da entrada de cada caso de teste cont�m um inteiro N (2 <= N <= 10). As N linhas seguintes cont�m N inteiros cada, separados por exatamente um espa�o em branco. Os inteiros dentro do quadrado s�o todos maiores que 0 (zero) e menores ou iguais a 1000.

Formato de sa�da

Seu programa deve imprimir, na sa�da padr�o, uma �nica linha com um inteiro representando a soma do quadrado m�gico ou -1 caso o quadrado n�o seja m�gico
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int tamanho;
    int i, j;
        scanf("%d",&tamanho);
    int quadrado[tamanho][tamanho];

    for(i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                scanf("%d",&quadrado[i][j]);
        }
    }

    int somaDP = 0, somaDS = 0;
    //soma diagonal principal
        for(i = 0; i < tamanho; i++){
            somaDP += quadrado[i][i];
	}
    //soma diagonal secund�ria
        for(i = 0; i < tamanho; i++){
            somaDS += quadrado[i][tamanho-i-1];
	}
    //soma linhas
	int vetLinhas[tamanho];
        for (i = 0; i < tamanho; i++) {
            vetLinhas[i] = 0;
            for (j = 0; j < tamanho; j++) {
                vetLinhas[i] += quadrado[i][j];
		}
	}
	//soma colunas
	int vetColunas[tamanho];
        for (j = 0; j < tamanho; j++) {
            vetColunas[j] = 0;
            for (i = 0; i < tamanho; i++) {
                vetColunas[j] += quadrado[i][j];
		}
	}
    int testLinhas = 1, testColunas = 1;
        for (i = 1; i <  tamanho; i++) {
            if (vetLinhas[i] != vetLinhas[i-1]) {
                testLinhas = 0;
                break;
            }else if (vetColunas[i] != vetColunas[i-1]) {
                testColunas = 0;
                break;
		}
	}
	if (testLinhas && testColunas && somaDP == somaDS && somaDP == vetLinhas[0]) {
		printf("%d\n",somaDP);
	} else{
		printf("-1\n");
	}

    system("pause");
	return 0;
}
