/*
Leia a hora inicial e a hora final de um jogo.
A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int hora_i, hora_f, HORA;

    scanf("%d %d", &hora_i, &hora_f);

    if (hora_i == hora_f){
        HORA = 24;
        printf("O JOGO DUROU %d HORA(S)\n", HORA);
    }
    else if (hora_i >= hora_f){
        HORA = (hora_i - 24) *(-1) + hora_f ;
        printf("O JOGO DUROU %d HORA(S)\n", HORA);
    }
     else if (hora_f >= hora_i){
        HORA = hora_f - hora_i;
        printf("O JOGO DUROU %d HORA(S)\n", HORA);
    }
    system("pause");
	return 0;
}
