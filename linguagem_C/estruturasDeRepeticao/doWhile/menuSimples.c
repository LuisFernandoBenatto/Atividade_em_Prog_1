#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

   int num, cont = 0;

   do{
        printf("1 - Cadastrar produto\n");
        printf("2 - Enviar produto\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &num);

   system("cls");
   }while (num != 3);

    system("pause");
    return 0;
}
