#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Funções
/*
 Um hotel na praia tem apartamentos com os preços na tabela abaixo.
 Com o fim do verão,o hotel resolver oferecer 15% de
 desconto para hospedagens de 3 ou mais dias.

Código  Tipo de Apartamento  Valor diária
1          Individual         R$ 125,00
2          Suíte Dupla        R$ 140,00
3          Suíte Tripla       R$ 180,00


 Escreva uma função chamada calculaHospedagem que receba
 o código do apartamento e a quantidade de diárias,
 calcule e retorne o valor total a ser pago.
*/

int calculaHospedagem (int diaria, int cod, int valor);
int main(){

    int dias, codigo;
    int valor_diaria;

    printf("Hotel de praia \n");
    printf("Informe a quantidade de dias: ");
    scanf("%d", &dias);
    printf("\n");
    printf("Informe o codigo do apartamento: ");
    scanf("%d", &codigo);
    printf("\n");

    int resultado = calculaHospedagem(dias, codigo, valor_diaria);
    printf("A pessoa ficara %d dias e pagara RS %d,00  \n", dias, resultado);
    system("pause");
    return 0;
}
int calculaHospedagem (int diaria, int cod, int valor){

    switch(cod){
           case 1:
               valor = diaria * 125;
               break;
           case 2:
               valor = diaria * 140;
               break;
           case 3:
               valor = diaria * 180;
               break;
    }
    if(diaria >= 3){
        int resultado;
        resultado = (valor * 15) / 100;
        resultado = valor - resultado;
        valor = resultado;
        }
 }

