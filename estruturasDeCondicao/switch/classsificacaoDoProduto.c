#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int produto;

    scanf("%d", &produto);

    switch (produto){//escolha a operação
               case 1://caso
                   printf("Alimento não-perecivel\n");
                   break;
               case 2 ... 4:// ... INTERVALO
                   printf("Alimento perecivel\n");
                   break;
               case 5:
                   printf("Vestuario\n");
                   break;
               case 6:
                   printf("Vestuario\n");
                   break;
               case 7:
                   printf("Higiene Pessoal\n");
                   break;
               case 8 ... 15:
                   printf("Limpeza e Utensilios Domesticos\n");
                   break;
               default:// padrao
                   printf("Codigo invalido\n");
    }
    system("pause");
    return 0;
}
