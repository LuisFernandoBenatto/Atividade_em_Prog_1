/*A locadora de carros SAI DA FRENTE est� fazendo uma promo��o e est� alugando carros no per�odo junino por R$ 30,00 a di�ria.
Al�m disso, a locadora cobra R$ 0,01 por quil�metro rodado. Como � per�odo de S�o Jo�o, a locadora quer fidelizar os clientes e est� dando 10% de desconto no valor total do aluguel de qualquer carro.

Quantos dias a pessoa ficou com o carro: [1; 30]
Quantos kil�metros ela rodou [1; 1000]

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
