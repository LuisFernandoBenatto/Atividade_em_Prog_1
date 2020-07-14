#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[100];
    int vogais = 0;

    fgets(palavra, 100, stdin);

    for(int i=0; i < 100; i++){
        if(palavra[i] == '\0'){
            break;
        }
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u' || palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
            vogais++;
        }
        //printf("%c", palavra[i]);
        //puts(palavra);
    }
    printf("A frase tem: %d vogais\n",vogais);
    system("pause");
    return 0;
}
