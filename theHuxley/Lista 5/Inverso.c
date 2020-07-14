/*
escrição
Seu programa deve receber um vetor de N valores inteiros e imprimir na ordem inversa.

Formato de entrada

Na primeira linha de entrada o programa recebe um valor inteiro N de entrada. A segunda linha contém N inteiros separados por espaço contendo os valores do array.

Formato de saída

Uma linha contendo os números do vetor em ordem invertida separados por espaços em branco, seguida de um final de linha.
Depois do último número, não deve existir um espaço em branco.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, num;
    scanf("%d", &num);

    int vetor[num];

    for(i = 0; i < num; i++){
        scanf("%d", &vetor[i]);
    }

    for( i = num - 1; i >= 0; i--){
       printf(" %d", vetor[i]);
    }
    printf("\n");
    system ("pause");
	return 0;
}
