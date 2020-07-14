#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int strings_iguais(char string1[50],char string2[50]);

int main(){

    char string[50];
    char string_2[50];
    int cont = 0, i, j;

    //fgets(string,50,stdin);
    scanf("%s",string);
    //fgets(string_2,50,stdin);
    scanf("%s",string_2);

    cont = strings_iguais(string,string_2);
    if(cont == 1){
        //printf("%d\n",cont);
        printf("IGUAIS\n");
    }else{
        //printf("%d\n",cont);
        printf("DIFERENTES\n");

    }

    system("pause");
    return 0;
}
int strings_iguais(char string1[50],char string2[50]){

    int i = 0;

    while(string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0'){
            ++i;
    }
        //printf("%d\n",i);
        if(string1[i] == '\0' && string2[i] == '\0'){
            return 1;
        }else{
            return 0;
        }
}
