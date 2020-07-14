/*
Descrição
Um palíndromo é uma palavra ou frase que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Por exemplo, as strings "aaaaa", "1221", "bbaabb" são palíndromos, entretanto a string "chef" não é um palíndromo porque se lermos da direita para a esquerda, obtemos "fehc" que não é a mesma coisa que "chef".

Ignore as diferenças entre maiúsculas e minúsculas.

Para os casos onde é dada uma frase, você deve ignorar os espaços. Por exemplo, a frase "A base do teto desaba" é considerada um palíndromo. Ao lê-la da direita para a esquerda, você obterá: "abased otet od esab A". Perceba que, com exceção do espaço, a sequência de caracteres é a mesma da frase original.

Faça um programa que indique se uma string dada é um palíndromo ou não.

Formato de entrada

A entrada consiste de um inteiro n seguido de n strings. Cada string contém no máximo 255 caracteres.

Formato de saída

Para cada string, imprima "SIM" caso seja um palíndromo e "NAO" caso contrário.

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
