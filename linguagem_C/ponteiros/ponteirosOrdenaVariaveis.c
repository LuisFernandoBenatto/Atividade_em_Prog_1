#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void troca(int *a, int *b);

int main(){

    int x = 0;
    int y = 0;
    int z = 0;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    printf("Valor atual de x = %d\nValor atual de y = %d\nValor atual de z = %d\n", x,y,z);

    if(x > y || x > z){
        if(y < z){
            //y � o menor de todos
            troca(&y,&x);
        }else{
            //z � menor de todos
            troca(&x,&z);
        }
    }
    if(y > z){
        //x � o menor por�m z � o do meio
        troca(&y,&z);
    }
    printf("x = %d\ny = %d\nz = %d\n", x,y,z);

    printf("\n");
    system("pause");
    return 0;
}
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}


