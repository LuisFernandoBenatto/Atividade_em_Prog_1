#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void troca(int *x, int *y);

int main(){

    int a = 10;
    int b = 30;
    int *ponteiro = NULL;

    printf("Antes da troca \na = %d\nb = %d\n", a,b);
    troca(&a,&b);
    printf("Depois da troca \na = %d\nb = %d\n", a,b);

    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}
void troca(int *x, int *y){

     int aux = *x;
     *x = *y;
     *y = aux;

}
