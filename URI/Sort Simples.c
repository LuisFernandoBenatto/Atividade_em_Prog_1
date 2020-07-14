/*
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

if (a <= b && a <= c && b <= c ){
        printf("%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);
    }
    else if (a <= b && a <= c && c <= b){
        printf("%d\n",a);
        printf("%d\n",c);
        printf("%d\n",b);
    }
    else if (b <= a && b <= c && a <= c){
        printf("%d\n",b);
        printf("%d\n",a);
        printf("%d\n",c);
    }
    else if (b <= a && b <= c && c <= a){
        printf("%d\n",b);
        printf("%d\n",c);
        printf("%d\n",a);
    }
    else if (c <= a && c <= b && a <= b){
        printf("%d\n",c);
        printf("%d\n",a);
        printf("%d\n",b);
    }
     else if (c <= a && c <= b && b <= a){
        printf("%d\n",c);
        printf("%d\n",b);
        printf("%d\n",a);
    }
        printf("\n%d\n",a);
        printf("%d\n",b);
        printf("%d\n",c);


    system("pause");
	return 0;
}
