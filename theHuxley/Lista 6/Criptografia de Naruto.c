/*
Naruto est� desenvolvendo um sistema de criptografia que consiste em mapear cada letra do alfabeto naquela referente � sua posi��o de tr�s para frente.

Vamos ajuda-lo a escrever esse sistema. Para isso vamos escrever uma fun��o que recebe uma frase de tamanho n�o-nulo e retorna uma frase.

Observa��es:

Ignore palavras acentuadas, n�meros e caracteres especiais (!,@,# etc.) e trabalhe apenas com letras minusculas.

Espa�o em branco � igual a espa�o em branco :)

Formato de entrada

String

Formato de sa�da

String
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char string[400];
    int i, j, cont = 0;
    char alfabeto[26]="abcdefghijklmnopqrstuvwxyz";
    char alfabeto_invertido[26]="zyxwvutsrqponmlkjihgfedcba";

    fgets(string,400,stdin);

    int tam = strlen(string);

    for(i = 0; i < tam;i++){
        for(j = 0; j < 26; j++){
            if(string[i] == alfabeto[j]){
                string[i] = alfabeto_invertido[j];
                break;
            }
        }
    }
    printf("%s",string);
    system("pause");
    return 0;
}
