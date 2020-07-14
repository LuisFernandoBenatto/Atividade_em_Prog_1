/*
Paes e Willy, grandes amigos de inf�ncia, resolveram ir almo�ar num restaurante. Entediados pela demora da comida, eles resolveram jogar um jogo: <NOME DO JOGO>.
Apesar de ser um jogo de sorte, eles resolveram apostar: Quem perdesse teria que pagar o almo�o do outro. O problema � que nesse jogo, a ordem das cartas n�o importa,
 e a pontua��o � sempre a m�xima poss�vel, ou seja, na hora do C�lculo, deve ser considerada qualquer combina��o das cartas.

Para evitar problemas, eles pediram que voc� fizesse um programa que calculasse quem seria o vencedor.

A pontua��o no jogo come�a com 0 e vai sendo acumulada:
+ N�mero da menor carta, se estiverem em ordem crescente com dist�ncia 1;
+ N�mero da menor carta, se todas forem iguais;
+ N�mero da menor carta / 2, se existirem apenas duas menores cartas iguais;
+ N�mero da maior carta / 2, se existirem apenas duas maiores cartas iguais;
+ 8, se a soma das cartas for 8

Vence o jogador que obtiver a maior quantidade de pontos. (0 = empate, 1 = paes, 2 = willy)

Formato de entrada

A primeira linha da entrada conter� 3 inteiros, representando as cartas de Paes, e a segunda linha conter� mais 3 inteiros, representando as cartas do Willy.

Formato de sa�da

A sa�da dever� ser um inteiro: 0 se for um empate, 1 se o Paes ganhar e 2 se o Willy ganhar.

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
