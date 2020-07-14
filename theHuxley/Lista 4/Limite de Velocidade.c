/*
Devido ao grande n�mero de acidentes ocorridos recentemente na rua principal da cidade,
um sistema de radares ser� instalado para multar os condutores que excederem os 50 km/h permitidos.
Aqueles que excederem a velocidade, mas estiverem no m�ximo 10% acima da velocidade limite ser�o multados em R$ 230.
J� os condutores que excederem a velocidade permitida em at� 20% ser�o multados em R$ 340.
Caso a velocidade do motorista exceda o limite em mais de 20%, ele ter� que pagar uma multa de R$ 19,28 por cada km excedido.

Escreva uma fun��o chamada CalculaMulta que receba como entrada a velocidade de um condutor e retorne o valor da multa que ele ter� que pagar.

Formato de entrada

Um valor inteiro

Formato de sa�da

Um valor real
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double CalculaMulta(double velocidade);

int main(){

    double km_h;

    scanf("%lf", &km_h);

    printf("%.2lf\n", CalculaMulta(km_h));

    system("pause");
    return 0;
}
double CalculaMulta(double velocidade){

     double multa = 0.0;
     double resultado = 0.0;

    if(velocidade <= 50){
        multa = 0.0;
        return multa;

    }else if(velocidade > 50 && velocidade <= 55){
        multa = 230.00;
        return multa;

    }else if(velocidade > 55 && velocidade <= 60){
        multa = 340.00;
        return multa;

    }else if(velocidade > 60){
         resultado = velocidade - 50;
         velocidade = (resultado * 19.28) - resultado;
         multa = velocidade + resultado;
         return multa;

    }

}
