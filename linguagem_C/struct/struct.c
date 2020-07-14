#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct cliente{
       int codigo;
       char nome[100];
       int dia_nascimento;
       int mes_nascimento;
       int ano_nascimento;

};
int main(){

    struct cliente lista[10];
    int i;
    for(i=0; i<10; i++){
        lista[i].codigo = i+1;
        //getchar();
        fgets(lista[i].nome, 100, stdin);
        scanf("%d%d%d", &lista[i].dia_nascimento,
              &lista[i].mes_nascimento,
              &lista[i].ano_nascimento);

    }
    system("pause");
    system("cls");
    return 0;
}
