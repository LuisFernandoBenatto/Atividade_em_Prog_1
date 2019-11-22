#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double total = 0;
    int codigo = 0;

    do{
        printf("    Valor da compra: RS %.2lf\n", total);
        printf("    100 - Cachorro quente RS 1,70 \n");
        printf("    101 - Bauru Simples RS 2,30 \n");
        printf("    102 - Bauru com ovo RS 2,60 \n");
        printf("    103 - Hamburguer RS 2,40 \n");
        printf("    104 - ChesseBurguer RS 2,50 \n");
        printf("    105 - Refrigerante RS 1,00 \n");
        printf("    106 - Finalizar\n");

        printf("    Escolha: ");
        scanf("%d", &codigo);

        switch (codigo){
               case 100:
                   total = total + 1.70;
                   break;
               case 101:
                   total = total + 2.30;
                   break;
               case 102:
                   total = total + 2.60;
                   break;
               case 103:
                   total = total + 2.40;
                   break;
               case 104:
                   total = total + 2.50;
                   break;
               case 105:
                   total = total + 1.00;
                   break;
               default:
                    printf("Codigo invalido\n");
        }
    system("cls");
    }while (codigo != 106);
        printf("    O valor da sua compra foi de: RS %.2lf\n", total);

    system("pause");
    return 0;
}
