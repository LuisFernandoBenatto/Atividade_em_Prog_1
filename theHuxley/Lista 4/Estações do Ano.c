/*
Descrição
As quatro estações do ano variam de acordo com as datas:

Primavera: 21 setembro até 20 dezembro
Verão: 21 dezembro até 20 março
Outono: 21 março até 20 junho
Inverno: 21 junho até 20 setembro


Escreva uma função chamada EstacaoAno que
receba como entrada um dia e um mês e
retorne o nome da estação correspondente.


Formato de entrada

Dois valores inteiros, representando o dia e o mês nessa sequência


Formato de saída

Um String em letras maiúsculas

Obs: Não use acento em VERAO
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
