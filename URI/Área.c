/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima,
sempre com mensagem correspondente e um espaço entre os dois pontos e o valor.
O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    scanf("%lf %lf %lf",&A,&B,&C);

    TRIANGULO = (A * C) / 2;             //a) a área do triângulo retângulo que tem A por base e C por altura.
    CIRCULO = 3.14159 * (C * C);             //b) a área do círculo de raio C. (pi = 3.14159)
    TRAPEZIO = ((A + B) * C) / 2;            //c) a área do trapézio que tem A e B por bases e C por altura.
    QUADRADO = B * B;            //d) a área do quadrado que tem lado B.
    RETANGULO = A * B;            //e) a área do retângulo que tem lados A e B.

    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);

    system("pause");
	return 0;
}
