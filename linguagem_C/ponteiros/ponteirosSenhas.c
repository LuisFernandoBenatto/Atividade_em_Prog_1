#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void forca_senha(char senha[20], int *aux){

    int numeros = 0, especiais = 0, caracteres = 0;
    int i, cont = 0;
    for(i = 0; i < 20; i++){
        if(senha[i] == '\n'){
            senha[i] = '\0';
        }
        if(senha[i] == '\0'){
            break;
        }
        cont++;
    }

    if(cont >= 12){
        for(i = 0; i < 20; i++){
            if(senha[i] == '0' || senha[i] == '1' || senha[i] == '2' || senha[i] == '3' || senha[i] == '4' || senha[i] == '5'
               || senha[i] == '6' || senha[i] == '7' || senha[i] == '8' || senha[i] == '9'){
                    numeros = 1;
               }if(senha[i] >= 'A' && senha[i] <= 'Z'|| senha[i] >= 'a' && senha[i] <= 'z'){
                    caracteres = 1;
               }if(senha[i] == '@'|| senha[i] == '$' || senha[i]=='*'){
                    especiais = 1;
               }
        }
        printf("SENHA FORTE\n");

    }else if(cont >= 8){
        for(i = 0; i < 20; i++){
            if(senha[i] == '0' || senha[i] == '1' || senha[i] == '2' || senha[i] == '3' || senha[i] == '4' || senha[i] == '5'
               || senha[i] == '6' || senha[i] == '7' || senha[i] == '8' || senha[i] == '9'){
                    numeros = 1;
               }if(senha[i] >= 'A' && senha[i] <= 'Z'|| senha[i] >= 'a' && senha[i] <= 'z'){
                    caracteres = 1;
               }
        }
        printf("SENHA MEDIA\n");

    }else if(cont >= 6){
        for(i = 0; i < 20; i++){
            if(senha[i] >= 'A' && senha[i] <= 'Z'|| senha[i] >= 'a' && senha[i] <= 'z'){
                caracteres = 1;
            }
        }
        printf("SENHA FRACA\n");

    }else if(cont < 6){
        printf("SENHA INVALIDA\n");
    }

}

int main(){

    char senha[20];
    int cont = 0;
    int i;


    fgets(senha,20,stdin);

    for(i = 0; i < 20; i++){
        if(senha[i] == '\n'){
            senha[i] = '\0';
        }
        if(senha[i] == '\0'){
            break;
        }
        cont++;
    }

    forca_senha(senha,i);


    //printf("%d\n",cont);

    //printf("%s",senha);

    printf("\n");
    system("pause");
    return 0;
}
    /*for(i = 0; i < 20; i++){
        printf("senha[%d] = %c ptr = %c\n", i, senha[i], ptr);
            if(senha[i] == '\0'){
            break;
        }
        *ptr ++;
    }*/
