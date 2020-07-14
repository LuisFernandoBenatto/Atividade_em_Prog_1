/*
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia =

Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante:
x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    double Distancia, x1, y1, x2, y2;

    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);

    Distancia = ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    Distancia = sqrt(Distancia);

    printf("%.4lf\n", Distancia);
    system("pause");
	return 0;
}
