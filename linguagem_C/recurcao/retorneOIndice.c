/*

3. Modifique o código do exercício 2 e faça uma função recursiva que
encontre um determinado número no array e retorne o índice de onde
ele foi encontrado. A função deve ter a seguinte assinatura:

int procurar(int *a, int tam, int índice, int num);
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int procurar(int *a, int tam, int indice, int num){
    if(indice == tam){
       return -1; //nao tem o numero do indice
    }else if(a[indice] == num){
        return indice;
    }else{
        return procurar(a, tam, indice + 1, num);
    }
}
int main(){
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a = 0, indice = 0;

    printf("Digite um numero do array: ");
    scanf("%d", &a);

    printf("\n");
    printf("O numero esta no indice: %d\n", procurar(num,10,indice,a));

    system("pause");
    return 0;
}
