/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int hora_i, minuto_i, hora_f, minuto_f, HORA, MINUTO;

    scanf("%d %d %d %d", &hora_i, &minuto_i, &hora_f, &minuto_f);

    if (hora_i == minuto_i && hora_f == minuto_f && hora_i == hora_f && minuto_i == minuto_f){
        HORA = 24;
        MINUTO = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HORA, MINUTO);
    }
    else if (hora_i >= hora_f && minuto_i >= minuto_f){
        HORA = hora_i - hora_f;
        MINUTO = minuto_i - minuto_f;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HORA, MINUTO);
    }
    else if (hora_f >= hora_i && minuto_f >= minuto_i){
        HORA = hora_f - hora_i;
        MINUTO = minuto_f - minuto_i;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", HORA, MINUTO);
    }

    system("pause");
	return 0;
}
