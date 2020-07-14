#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct cadastros{
        int numero_passagem;
        int dia;
        int mes;
        int ano;
        char de[50];
        char para[50];
        int minutos;
        int segundos;
        int poltrona;
        int idade;
        char nome[100];
}Cadastros;

void imprimindo_struct(Cadastros c);
void leitura(struct cadastros *lista);

int main(){
    int i;
    int x = 0;
    struct cadastros lista[x];

    do{
        scanf("%d", &(*lista).numero_passagem);
        scanf("%d %d %d", &(*lista).dia, &(*lista).mes, &(*lista).ano);
        getchar();
        fgets((*lista).de, 50, stdin);
        getchar();
        fgets((*lista).para, 50, stdin);
        scanf("%d %d", &(*lista).minutos, &(*lista).segundos);
        scanf("%d", &(*lista).poltrona);
        scanf("%d", &(*lista).idade);
        getchar();
        fgets((*lista).nome, 100, stdin);

    }while((scanf("%d", &(*lista).numero_passagem)) != -1);


    system("pause");
    return 0;
}
void imprimindo_struct(Cadastros c){
    printf("\n");
}
void leitura(struct cadastros *lista){
    scanf("%d", &(*lista).numero_passagem);
    scanf("%d %d %d", &(*lista).dia, &(*lista).mes, &(*lista).ano);
    getchar();
    fgets((*lista).de, 50, stdin);
    getchar();
    fgets((*lista).para, 50, stdin);
    scanf("%d %d", &(*lista).minutos, &(*lista).segundos);
    scanf("%d", &(*lista).poltrona);
    scanf("%d", &(*lista).idade);
    getchar();
    fgets((*lista).nome, 100, stdin);
}
