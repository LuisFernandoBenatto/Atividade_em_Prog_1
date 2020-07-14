#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void troca(char **str){
    int i;
    for(int i = 0; i < 5; i++){
        if(*str == '\n'){
            *str == '\0';
        }
        if(*str == "Alface" || *str == "Rucula" || *str == "Couve"){
            *str = "Picanha";
        }
        str++;
    }
}

void troca2(char *str){
        if(strcmp(str,"Alface") == 0 || strcmp(str,"Rucula") == 0 || strcmp(str,"Couve") == 0){
            strcpy(str, "Picanha");
        }
}

int main(){

    char *str[5] = {"Arroz","Feijao","Alface","Farofa","Rucula"};

    printf("*** Antes da troca ***\n");

    for(int i = 0; i < 5; i++){
        printf("%s\n", str[i]);
    }
    printf("\n");

    printf("*** Depois da troca ***\n");

    troca(str);

    for(int i = 0; i < 5; i++){
        printf("%s\n", str[i]);
    }
    printf("\n");

    printf("*** Depois da troca 2***\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", str[i]);
        troca2(str[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}


    /*char string[5][30];
    int cont = 0;

    for(int i = 0; i < 5; i++){
        scanf("%s", string[i]);
        if(string[i] == '\n'){
            string[i] == '\0';
        }
        if(string[i] == '\0'){
            break;
        }
        cont++;
    }*/
