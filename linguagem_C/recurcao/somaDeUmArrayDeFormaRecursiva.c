/*
2. Calcule a soma de um array de inteiros de forma recursiva. Pode-se
utilizar o seguinte array:

int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


� A f�rmula para este exerc�cio �:

� Dica: a sua fun��o recursiva deve receber tr�s par�metros:
� Um ponteiro apontando para o array;
� Um inteiro �ndice para a posi��o; e
� Um inteiro indicando o tamanho do array.

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int soma_recursiva(int *a, int i, int tam){
    if(i == tam - 1){
        return a[i];
    }else {
       return a[i] + soma_recursiva(a, i + 1, tam);
    }
}
int main(){
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 0, i = 0, tam = 0;
    printf("A soma de um array de 1 a 10 e: %d\n", soma_recursiva(num, i, 10));
    system("pause");
    return 0;
}
