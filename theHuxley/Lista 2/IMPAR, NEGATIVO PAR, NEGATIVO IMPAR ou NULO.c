#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Leia um valor inteiro N. Depois, imprima uma mensagem dizendo que se este valor for �mpar, par, positivo, negativo ou nulo.
A mensagem deve estar em letras mai�sculas.
Um n�mero N.



Considere que o maior inteiro que voc� poder� receber � 10^12 (10 elevado a 12)

Formato de sa�da

Uma frase, informando se o n�mero � POSITIVO PAR, POSITIVO IMPAR, NEGATIVO PAR, NEGATIVO IMPAR ou NULO.

Seguido de uma quebra de linha.

*/
int main() {
    long int num;

    scanf("%ld", &num);

    if (num % 2 == 0 && num > 0){
        printf("POSITIVO PAR \n");
    }
    else if (num % 2 == 0 && num < 0){
        printf("NEGATIVO PAR \n");
    }
    else if (num % 2 == 1 && num > 0){
        printf("POSITIVO IMPAR \n");
    }
    else if ( num < 0 && num % 2 <= 1 || num % 2 >= 1){
        printf("NEGATIVO IMPAR \n");
    }
    else if (num == 0){
        printf("NULO \n");
    }

    system("pause");
    return 0;
}
