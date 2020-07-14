#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num = 0, num2 = 0, aux;
    int flag = 0;

    scanf("%d %d", &num2, &num);

    for ( aux = num ; aux > 0 ; aux-- ){
        if (aux % num2 == 0){
            printf("%d", aux);
            flag = 1;
            break;
        }
    }
    if (!flag){
        printf("sem multiplos menores que %d\n", num);
    }

    return 0;
}
