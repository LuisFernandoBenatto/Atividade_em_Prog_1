#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct cadastros{
        int idade;
        char nome[50];
        char sexo;
        char estado_civil;
        int amigos;
        int fotos;
}Cadastros;

void imprimindo_struct(Cadastros c);
void leitura(struct cadastros *lista);

int main(){
    int i;
    int quantidade = 0;

    scanf("%d", &quantidade);
    struct cadastros lista[quantidade];

    for(i = 0; i < quantidade; i++){
        leitura(&lista[i]);
    }
    for(i = 0; i < quantidade; i++){
        imprimindo_struct(lista[i]);
    }
    system("pause");
    return 0;
}
void imprimindo_struct(Cadastros c){
    printf("Idade: %d\n", c.idade);
    printf("Nome: %s", c.nome);
    printf("Sexo: %c\n", c.sexo);
    printf("Estado Civil: %c\n", c.estado_civil);
    printf("Numero de amigos: %d\n", c.amigos);
    printf("Numero de fotos: %d\n", c.fotos);
    printf("\n");
}
void leitura(struct cadastros *lista){
    scanf("%d", &(*lista).idade);
    getchar();
    fgets((*lista).nome, 100, stdin);
    scanf("%c",&(*lista).sexo);
    getchar();
    scanf("%c",&(*lista).estado_civil);
    scanf("%d",&(*lista).amigos);
    scanf("%d",&(*lista).fotos);
}
