/* Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio.
 A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.

 O arquivo de entrada cont�m 2 n�meros inteiros e 1 n�mero com duas casas decimais, representando o n�mero,
 quantidade de horas trabalhadas e o valor que o funcion�rio recebe por hora trabalhada, respectivamente


 Imprima o n�mero e o sal�rio do funcion�rio, conforme exemplo fornecido, com um espa�o em branco antes e depois da igualdade.
  No caso do sal�rio, tamb�m deve haver um espa�o em branco ap�s o $.

 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int number, horas;
    float salary;

    scanf("%d", &number);
    scanf("%d", &horas);

    scanf("%f", &salary);

    printf("\nNUMBER = %d", number);
    printf("\nSALARY = R$ %.2f\n", salary * horas);

    system("pause");
	return 0;
}
