#include <stdio.h>
#include <math.h>

int main(){
    int idade_enzo, idade_valentina;
    scanf("%d%d", &idade_enzo, &idade_valentina);

    if(idade_enzo %2 == 0 && idade_valentina %2 == 0) {
        printf("\n desconto \n");
    }
    else{
        printf("\n nao tem desconto \n");
    }
    system ("pause");
    return 0;

}
