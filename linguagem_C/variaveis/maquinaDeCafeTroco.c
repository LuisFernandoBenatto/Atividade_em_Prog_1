#include <stdio.h>
#include <stdlib.h>

int main(){

  int dinheiro, troco;
  printf(" Maquina automatica de cafe so funciona com notas de 5 reais e nunca da troco. \n");

  printf("\n Quantidade de dinheiro colocada na maquina: ");
  scanf("%d", &dinheiro);

  troco = dinheiro % 7;

  printf("\n O cliente perdera de troco R$ %d,00  \n", troco);

  system("pause");
  return 0;
}
