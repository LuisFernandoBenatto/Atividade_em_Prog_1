/*
Descri��o
As quatro esta��es do ano variam de acordo com as datas:

Primavera: 21 setembro at� 20 dezembro
Ver�o: 21 dezembro at� 20 mar�o
Outono: 21 mar�o at� 20 junho
Inverno: 21 junho at� 20 setembro


Escreva uma fun��o chamada EstacaoAno que
receba como entrada um dia e um m�s e
retorne o nome da esta��o correspondente.


Formato de entrada

Dois valores inteiros, representando o dia e o m�s nessa sequ�ncia


Formato de sa�da

Um String em letras mai�sculas

Obs: N�o use acento em VERAO
*/

#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int EstacaoAno (int dia, int mes);

int main(){
    int dia = 1;
    int mes = 1;

    scanf("%d",&dia);
    scanf("%d",&mes);

    int Estacao = EstacaoAno(dia,mes);

    if (Estacao == 1){
         printf("PRIMAVERA\n");
    }else if (Estacao == 2){
               printf("VERAO\n");
     }else if (Estacao == 3){
               printf("OUTONO\n");
      }else if (Estacao == 4){
               printf("INVERNO\n");
       }
    system("pause");
    return 0;
}

int EstacaoAno (int dia, int mes){

    if(dia >= 1 && dia <= 31){
    if(mes >= 1 && mes <= 12){


            if (mes == 10 || mes == 11){
                return 1;
                }else if (mes == 12){
                    if(dia < 21)

                return 1;
            }
            if (mes == 1 || mes == 2){
                return 2;
                }else if (mes == 3){
                    if(dia < 21)
                return 2;
            }
            if (mes == 4 || mes == 5){
                return 3;
                }else if (mes == 6){
                    if(dia < 21)
                return 3;
            }
            if (mes == 7 || mes == 8){
                return 4;
                }else if (mes == 9){
                    if(dia < 21)
                return 4;
            }


    }
    }
}
