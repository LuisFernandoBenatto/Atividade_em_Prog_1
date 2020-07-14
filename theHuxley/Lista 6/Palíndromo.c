/*
Descri��o
Um pal�ndromo � uma palavra ou frase que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Por exemplo, as strings "aaaaa", "1221", "bbaabb" s�o pal�ndromos, entretanto a string "chef" n�o � um pal�ndromo porque se lermos da direita para a esquerda, obtemos "fehc" que n�o � a mesma coisa que "chef".

Ignore as diferen�as entre mai�sculas e min�sculas.

Para os casos onde � dada uma frase, voc� deve ignorar os espa�os. Por exemplo, a frase "A base do teto desaba" � considerada um pal�ndromo. Ao l�-la da direita para a esquerda, voc� obter�: "abased otet od esab A". Perceba que, com exce��o do espa�o, a sequ�ncia de caracteres � a mesma da frase original.

Fa�a um programa que indique se uma string dada � um pal�ndromo ou n�o.

Formato de entrada

A entrada consiste de um inteiro n seguido de n strings. Cada string cont�m no m�ximo 255 caracteres.

Formato de sa�da

Para cada string, imprima "SIM" caso seja um pal�ndromo e "NAO" caso contr�rio.

Exemplos de:
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, j, cont = 0, tam;
    char string[255], str;
    int num = 0;
    char c;

    scanf("%d ",&num);

    while(cont < num){
        str = 1;
        fgets(string, 255, stdin);
        string[strlen(string)-1] = '\0';

        tam = strlen(string);

        for(i = 0; i < tam; i++){
            string[i] = toupper(string[i]);
        }
        for(i = 0, j = tam - 1; i < tam;){
                if(string[i] == ' '){
                    i++;
                    continue;
                }else if(string[j] == ' '){
                         j--;
                         continue;
                    }
                if(string[i] != string[j]){
                    str = 0;
                }
                  i++;
                  j--;
        }
         if(str == 0){
            printf("NAO\n");
         }else{
            printf("SIM\n");
         }
        cont++;
    }

    system("pause");
	return 0;
}
