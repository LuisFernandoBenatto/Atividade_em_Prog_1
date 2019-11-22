#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int cadastrar_produto(char *produto);
void imprimir_arquivo();

int main(){

    int op = -1;
    char produto[100];

    do{
        printf("**** Mercadinho da UENP ****\n");
        printf("**** 1 - Cadastrar      ****\n");
        printf("**** 2 - Listar         ****\n");
        printf("**** 3 - Sair           ****\n");
        printf("\n");
        printf("**** Informe um comando: ");
        scanf("%d",&op);
        printf("\n");
        switch(op){
            case 1:
                getchar();
                printf("Digite o nome do produto que deseja cadastrar\n");
                fgets(produto,100,stdin);
                cadastrar_produto(produto);
            break;
            case 2:
                imprimir_arquivo();
            break;
        }

    }while(op != 3);

    system("pause");
    return 0;
}
int cadastrar_produto (char *produto){
    FILE *Lista;
    Lista = fopen("Listadecompras.txt","a");
    if(Lista == NULL){
        printf("Falha ao abrir o arquivo!\n");
        return 0;
    }
    fprintf(Lista,"%s", produto);
    fclose(Lista);
    return 1;
}
void imprimir_arquivo(){
    FILE *Lista;
    char itens[100];
    Lista = fopen("Listadecompras.txt","r");

    if(Lista == NULL){
        printf("Falha ao abrir o arquivo!\n");
        return;
    }
    system("cls");

    printf("****  Lista de Compra   ****\n");
    while(fgets(itens, 100, Lista) != NULL){
        printf("* %s", itens);
    }
    printf("****************************\n");
    fclose(Lista);
    system("pause");
    system("cls");
}
