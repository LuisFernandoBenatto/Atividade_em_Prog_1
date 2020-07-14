/*
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a dura��o do jogo.

Obs: O jogo tem dura��o m�nima de um (1) minuto e dura��o m�xima de 24 horas.

Entrada
Quatro n�meros inteiros representando a hora de in�cio e fim do jogo.

Sa�da
Mostre a seguinte mensagem: �O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)� .
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
