/*A locadora de carros SAI DA FRENTE está fazendo uma promoção e está alugando carros no período junino por R$ 30,00 a diária.
Além disso, a locadora cobra R$ 0,01 por quilômetro rodado. Como é período de São João, a locadora quer fidelizar os clientes e está dando 10% de desconto no valor total do aluguel de qualquer carro.

Quantos dias a pessoa ficou com o carro: [1; 30]
Quantos kilômetros ela rodou [1; 1000]

O valor total que a pessoa deve pagar pelo aluguel do carro arredondado para duas casas decimais.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double Km, dias, total, diaria, kmrodados, desconto;

    scanf("%lf", &dias);
    scanf("%lf", &Km);

    diaria = dias * 30;
    kmrodados = Km * 0.01;
    total = diaria + kmrodados;

    desconto = total * 10/100;
    total = total - desconto;

    printf("%.2lf", total);

	return 0;
}
