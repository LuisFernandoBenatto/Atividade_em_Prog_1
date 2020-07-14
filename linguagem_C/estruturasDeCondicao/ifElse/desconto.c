#include <stdio.h>
#include <math.h>

/*Modifique o código do cinema para dar descontos somente se uma das
duas tiver idade ímpar. Teste com a tabela a seguir:
*/

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    if(a %2 == 0 ^ b %2 == 0) {
        printf("\n desconto \n");
    }
    system ("pause");
    return 0;
}


/* a | b | resposta esperada
   20| 22|
   20| 17| desconto
   19| 26| desconto
   19| 33|
*/
