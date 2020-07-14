#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void inverter(int *a, int *b);


int main(){

    int a = 0;
    int b = 0;

    scanf("%d",&a);
    scanf("%d",&b);

    printf("Valor atual de a = %d\nValor atual de b = %d\n", a,b);
    inverter(&a,&b);
    printf("Valor de a = %d\nValor de b = %d\n", a,b);

    printf("\n");
    system("pause");
    return 0;
}
void inverter(int *a, int *b){
        int aux = *a;
        *a = *b;
        *b = aux;
}
