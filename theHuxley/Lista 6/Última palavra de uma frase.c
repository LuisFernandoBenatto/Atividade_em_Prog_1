/*
Descri��o
Leia uma string e imprima somente a �ltima palavra da mesma. Exemplo:
Se a string digitada for "Jos� da Silva", dever� ser impresso na tela a substring "Silva".

Formato de entrada

Uma frase com no m�ximo 400 caracteres.

Formato de sa�da

Uma �nica linha contendo a �ltima palavra da frase digitada.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int i, j = 0, cont = 0;
    char string[400];

    fgets(string, 400, stdin);

    int tam = strlen(string);
    for(i = 0; string[i] != '\0'; i++){
        if(string[i] == ' '){
            j = i + 1;
        }
    }
    for(i = j; string[i] != '\0'; i++){
            printf("%c",string[i]);
    }
    system("pause");
    return 0;
}
