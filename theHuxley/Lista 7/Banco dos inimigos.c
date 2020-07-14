#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct inimigos{
       char nome[20];
       int ID;
       int level;
       int vida;
       int ataque;
       int defesa;
}Inimigos;

void imprimindo_struct(Inimigos *c);

int main(){
    int quantidade = 0;
    int i, j;
    int aux = 0;

    scanf("%d",&quantidade);
    struct inimigos lista[quantidade];


    for(i = 0; i < quantidade; i++){
        getchar();
        fgets(lista[i].nome, 20, stdin);
        scanf("%d",&lista[i].ID);
        scanf("%d",&lista[i].level);
        scanf("%d",&lista[i].vida);
        scanf("%d",&lista[i].ataque);
        scanf("%d",&lista[i].defesa);
        imprimindo_struct(&lista[i]);
    }
    system("pause");
    return 0;
}
void imprimindo_struct(Inimigos *c){
    printf("Nome: %s",c->nome);
    printf("ID: %d\n",c->ID);
    printf("Level: %d\n",c->level);
    printf("Vida: %d\n",c->vida);
    printf("Ataque: %d\n",c->ataque);
    printf("Defesa: %d\n",c->defesa);
}
