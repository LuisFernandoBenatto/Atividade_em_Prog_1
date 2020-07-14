#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){

    char palavra[80] = "Hello World!!!";
    char *palavra2;
    palavra2 = palavra;

    printf("O texto %s esta armazenado no emdereco %p\n", palavra, palavra);

    while(*palavra2){
        printf("O caracter *** %c *** da palavra *** %s *** esta no endereca *** %p ***\n",*palavra2, palavra, palavra);
        palavra2++;
    }

    system("pause");
    return 0;

}
