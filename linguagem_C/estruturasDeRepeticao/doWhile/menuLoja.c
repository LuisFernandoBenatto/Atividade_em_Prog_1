#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

   int num = 0, total=0;

   do{
        printf("*** SEJA BEM-VINDO A LOJA DA UENP ***\n");
        printf("    Valor da compra: RS %d,00\n", total);
        printf("    1 - Calca Jeans RS 200,00 \n");
        printf("    2 - Camisa RS 80,00 \n");
        printf("    3 - Sapato RS 100,00 \n");
        printf("    4 - Jaqueta RS 250,00 \n");
        printf("    5 - Finalizar\n");
        printf("    Escolha: ");
        scanf("%d", &num);

        if (num == 1){
            total = total + 200;
        }
        else if (num == 2){
            total = total + 80;
        }
        else if (num == 3){
            total = total + 100;
        }
        else if (num == 4){
            total = total + 250;
        }

   system("cls");
   }while (num != 5);
         printf("    O valor da sua compra foi de: RS %d,00\n", total);
         printf("*** VOLTE SEMPRE A LOJA DA UENP ***\n");

    system("pause");
    return 0;
}
