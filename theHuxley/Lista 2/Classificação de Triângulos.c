#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double lado_A, lado_B, lado_C;

    scanf("%lf", &lado_A);
    scanf("%lf", &lado_B);
    scanf("%lf", &lado_C);

    if(lado_A == lado_B && lado_A == lado_C && lado_B == lado_C ){
        printf("\n equilatero \n");
    }
    else if(lado_A == lado_B && lado_A != lado_C){
        printf("\n isosceles \n");
    }
    else if(lado_A == lado_C && lado_A != lado_B){
        printf("\n isosceles \n");
    }
    else if(lado_B == lado_C && lado_B != lado_A){
        printf("\n isosceles \n");
    }
    else if (lado_A != lado_B && lado_A != lado_C && lado_B != lado_C){
        printf("\n escaleno \n");
    }

    system("pause");
	return 0;
}










/*Os tri�ngulos mais simples s�o classificados de acordo com os limites das propor��es relativas de seus lados:


Um tri�ngulo equil�tero possui todos os lados congruentes ou seja iguais.
 Um tri�ngulo equil�tero � tamb�m equi�ngulo: todos os seus �ngulos internos s�o congruentes (medem 60�), sendo, portanto, classificado como um pol�gono
regular.


Um tri�ngulo is�sceles possui pelo menos dois lados de mesma medida e dois �ngulos congruentes. O tri�ngulo equil�tero �, conseq�entemente,
um caso especial de um tri�ngulo is�sceles, que apresenta n�o somente dois, mas todos os tr�s lados iguais, assim como os �ngulos, que medem
todos 60�. Num tri�ngulo is�sceles, o �ngulo formado pelos lados congruentes � chamado �ngulo do v�rtice. Os demais �ngulos
denominam-se �ngulos da base e s�o congruentes.


Em um tri�ngulo escaleno, as medidas dos tr�s lados s�o diferentes. Os �ngulos internos de um tri�ngulo escaleno tamb�m possuem medidas
diferentes.

Sua miss�o � escrever um programa para classificar um tri�ngulo de lados de comprimentos dados em: escaleno (os tr�s lados de comprimentos diferentes),
 is�sceles (dois lados de comprimentos iguais) ou equil�tero (os tr�s lados de comprimentos iguais).


 A entrada consiste de 03 n�meros reais maiores que zero correspondendo ao comprimento dos lados do tri�ngulo.

 A sa�da deve ser: "escaleno", "isosceles" ou "equilatero" seguido de um final delinha.
Obs.: as aspas acima n�o devem ser impressas e a sa�da deve ser impressa sem acentos.

*/
