#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[100];
    char caracter;
    char contador = 0;

    fgets(frase, 100, stdin);
    scanf("%c",&caracter);

    for(int i = 0; i < 100; i++){
        if(frase[i] == '\0'){
            break;
        }
        if(frase[i] == caracter){
            contador++;
        }
    }
    printf("A frase tem: >> %d << carcteres >> %c <<\n",contador,caracter);
    system("pause");
    return 0;
}
