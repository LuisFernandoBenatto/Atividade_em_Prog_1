/*

3. Modifique o c�digo do exerc�cio 2 e fa�a uma fun��o recursiva que
encontre um determinado n�mero no array e retorne o �ndice de onde
ele foi encontrado. A fun��o deve ter a seguinte assinatura:

int procurar(int *a, int tam, int �ndice, int num);
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
