#include <stdio.h>
#include <stdlib.h>
#define TAM 10
/*
* Exerc�cio 10 da mini maratona do dia 27/05/19.
* Esta solu��o envolve o uso de dois arrays unidimensionais,
* sendo que com matriz tamb�m pode se ter o mesmo resulado.
*/
int main() {
  int voos[TAM];
  int qtds[TAM];
  int documento=0, voo, i;
  for(i=0; i < TAM; i++) {
    scanf("%d", &voos[i]);
    scanf("%d", &qtds[i]);
  }
  do{
    scanf("%d", &documento);
    if(documento != 9999) {
      scanf("%d", &voo);
      int achou = 0; // variavel auxiliar para ajudar a saber se h� passagens
      // percorre o vetor com os voos para ver se h� vagas
      for(i=0; i < TAM; i++) {
        if(voo == voos[i]){ // verifica se o voo do vetor � igual o desejado
          if(qtds[i] > 0){ //verifica se h� vagas
            /* caso tenha vaga a variavel achou � alterada,
            * a quantidade de vagas � diminu�da e
            * � printado o documento do usu�rio .
            */
            achou = 1;
            qtds[i]--;
            printf("%d\n", documento);
          }
        }
      }
      if(!achou) { //caso achou tenha o valor 0 essa condi��o ser� verdadeira
        printf("INDISPONIVEL\n");
      }
    }
  } while(documento !=9999);
  return 0;
}
