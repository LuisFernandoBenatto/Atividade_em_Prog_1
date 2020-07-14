/*
No próximo fim-de-semana, Cristina vai sair com seus 6 primos, mas eles ainda não resolveram se vão ao cinema ou ao boliche.
Escreva um programa que receba como entrada o passeio escolhido por cada um e exiba ao final aquele que teve mais votos.

Formato de entrada

Strings contendo as palavras cinema ou boliche

Dica: lembre-se que o usuário pode digitar essas palavras usando maiúsculas e/ou minúsculas

Formato de saída

Um String com o nome do passeio escolhido, sendo todas as letras maiúsculas
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){

    int i, j, cont = 0, aux = 0;
    char string[7];
    int tam = 0;

    for(i = 0; i < 7; i++){
        scanf("%s",string);
        tam = strlen(string);
        if(tam == 7){
            cont++;
        }else if(tam == 6){
            aux++;
        }
    }
        if(cont > aux){
            printf("BOLICHE\n");
        }else{
            printf("CINEMA\n");
        }
    system("pause");
    return 0;
}
