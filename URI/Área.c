/*
Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.
Entrada
O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.

Sa�da
O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima,
sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor.
O valor calculado deve ser apresentado com 3 d�gitos ap�s o ponto decimal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    scanf("%lf %lf %lf",&A,&B,&C);

    TRIANGULO = (A * C) / 2;             //a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
    CIRCULO = 3.14159 * (C * C);             //b) a �rea do c�rculo de raio C. (pi = 3.14159)
    TRAPEZIO = ((A + B) * C) / 2;            //c) a �rea do trap�zio que tem A e B por bases e C por altura.
    QUADRADO = B * B;            //d) a �rea do quadrado que tem lado B.
    RETANGULO = A * B;            //e) a �rea do ret�ngulo que tem lados A e B.

    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);

    system("pause");
	return 0;
}
