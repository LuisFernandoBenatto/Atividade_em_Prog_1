#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int idade;

    scanf("%d", &idade);

    if (idade >= 16 && idade <18 || idade > 65){
        printf("\n Eleitor facultativo \n");
    }
    else if ( idade < 16 ){
        printf("\n Nao eleitor \n");
    }
    else if ( idade >= 18 && idade <= 65){
        printf("\n Eleitor obrigatorio \n");
    }
    system("pause");
    return 0;
}
