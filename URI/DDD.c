/*
Leia um número inteiro que representa um código de DDD para discagem interurbana.
Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:


Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado

Entrada
A entrada consiste de um único valor inteiro.

Saída
Imprima o nome da cidade correspondente ao DDD existente na entrada.
Imprima DDD nao cadastrado caso não existir DDD correspondente ao número digitado.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int cidade;

    scanf("%d",&cidade);

    if (cidade == 11){
        printf("Sao Paulo\n");
    }
    else if (cidade == 19){
        printf("Campinas\n");
    }
    else if (cidade == 61){
        printf("Brasilia\n");
    }
    else if (cidade == 71){
        printf("Salvador\n");
    }
    else if (cidade == 21){
        printf("Rio de Janeiro\n");
    }
    else if (cidade == 32){
        printf("Juiz de Fora\n");
    }
    else if (cidade == 27){
        printf("Vitoria\n");
    }
    else if (cidade == 31){
        printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }

    system("pause");
	return 0;
}
