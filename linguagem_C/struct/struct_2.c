#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct cliente{
       int codigo;
       char nome[100];
       int dia_nascimento;
       int mes_nascimento;
       int ano_nascimento;

}Cliente;

void print_struct(Cliente c);

int main(){

    struct cliente lista[1];
    int i;
    for(i=0; i<1; i++){
        lista[i].codigo = i+1;
        scanf("%s", lista[i].nome);
        scanf("%d %d %d", &lista[i].dia_nascimento, &lista[i].mes_nascimento, &lista[i].ano_nascimento);
        print_struct(lista[i]);
    }
    system("pause");
    system("cls");
    return 0;
}
void print_struct(Cliente c){
    system("cls");
    printf("Codigo: %d\n", c.codigo);
    printf("Nome: %s\n", c.nome);
    printf("Data nascimento: %d/ %d/ %d\n", c.dia_nascimento, c.mes_nascimento, c.ano_nascimento);
}
