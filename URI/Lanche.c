/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item.
A seguir, calcule e mostre o valor da conta a pagar.

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

    c = (quantidade*5.30);
    d = c-(c*0.15);
    e = (quantidade*6.00);
    f = (e-(e*0.15));
    g = (quantidade*3.20);
    h = (g-(g*0.15));
    i = (quantidade*2.50);
    j = (i-(i*0.15));
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    double total, codigo, quantidade;

    scanf("%lf %lf", &codigo, &quantidade);

    if(codigo == 1){
        codigo = 4.00;
    }
    else if(codigo == 2){
        codigo = 4.50;
    }
    else if(codigo == 3){
        codigo = 5.00;
    }
    else if(codigo == 4){
        codigo = 2.00;
    }
    else if(codigo == 5){
        codigo = 1.50;
    }
    total = codigo * quantidade;

    printf("Total: R$ %.2lf\n", total);
    system("pause");
	return 0;
}
