/*Fa�a um programa que leia um valor representando o gasto realizado por um cliente do restaurante COMABEM e imprima o valor total a ser pago,
considerando os 10% do gar�om.

Consiste de um n�mero real representando o valor gasto do cliente

Consiste de um n�mero real com duas casas decimais representando o total a ser pago considerando os 10% do gar�om.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    float garcom, total, pago;

    scanf("%f", &pago);

    garcom = pago * 10/100;

    total = pago + garcom;

    printf("%.2f \n", total);

    system("pause");
	return 0;
}
