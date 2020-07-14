/*
Paes e Willy, grandes amigos de infância, resolveram ir almoçar num restaurante. Entediados pela demora da comida, eles resolveram jogar um jogo: <NOME DO JOGO>.
Apesar de ser um jogo de sorte, eles resolveram apostar: Quem perdesse teria que pagar o almoço do outro. O problema é que nesse jogo, a ordem das cartas não importa,
 e a pontuação é sempre a máxima possível, ou seja, na hora do Cálculo, deve ser considerada qualquer combinação das cartas.

Para evitar problemas, eles pediram que você fizesse um programa que calculasse quem seria o vencedor.

A pontuação no jogo começa com 0 e vai sendo acumulada:
+ Número da menor carta, se estiverem em ordem crescente com distância 1;
+ Número da menor carta, se todas forem iguais;
+ Número da menor carta / 2, se existirem apenas duas menores cartas iguais;
+ Número da maior carta / 2, se existirem apenas duas maiores cartas iguais;
+ 8, se a soma das cartas for 8

Vence o jogador que obtiver a maior quantidade de pontos. (0 = empate, 1 = paes, 2 = willy)

Formato de entrada

A primeira linha da entrada conterá 3 inteiros, representando as cartas de Paes, e a segunda linha conterá mais 3 inteiros, representando as cartas do Willy.

Formato de saída

A saída deverá ser um inteiro: 0 se for um empate, 1 se o Paes ganhar e 2 se o Willy ganhar.

*/
#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int calculodobaralho(int a, int b, int c);
int main(){

    int carta1 = 0, carta2 = 0, carta3 = 0;
    int pontos_Willy, pontos_Paes;

    //Paes
    scanf("%d %d %d", &carta1, &carta2, &carta3);
    pontos_Paes = calculodobaralho(carta1,carta2,carta3);
    //Willy
    scanf("%d %d %d", &carta1, &carta2, &carta3);
    pontos_Willy = calculodobaralho(carta1,carta2,carta3);

    int resultado = 0;
    if(pontos_Paes > pontos_Willy){
        resultado = 1;
    }else if(pontos_Willy > pontos_Paes){
       resultado = 2;
    }
    printf("%d\n",resultado);

    system("pause");
    return 0;
}
int calculodobaralho(int a, int b, int c){
    int pontos = 0;
    int carta1, carta2, carta3;

    if(a > b){
        if(b > c){
            carta1 = c;
            carta2 = b;
            carta3 = a;
        }if(c > b){
            carta1 = b;
            carta2 = c;
            carta3 = a;
        }
    }
    else if(b > a){
        if(a > c){
            carta1 = c;
            carta2 = a;
            carta3 = b;
        }if(c > a){
            carta1 = a;
            carta2 = c;
            carta3 = b;
        }
    }
    else if(c > b){
        if(b > a){
            carta1 = a;
            carta2 = b;
            carta3 = c;
        }if(a > b){
            carta1 = b;
            carta2 = a;
            carta3 = c;
        }
    }
    if (carta1 +1 == carta2 && carta2 +1 == carta3){
        pontos += carta1;
        return pontos;
    }
    if (carta1 == carta2 && carta2 == carta3){
        pontos += carta1;
        return pontos;
    }
    if (carta1 == carta2 && carta2 < carta3){
        pontos += carta1 /2;
        return pontos;
    }
    if (carta2 == carta3 && carta1 < carta3){
        pontos += carta2 /2;
        return pontos;
    }
    if ((carta1 + carta2 + carta3) == 8){
        pontos += 8;
        return pontos;
    }

}
