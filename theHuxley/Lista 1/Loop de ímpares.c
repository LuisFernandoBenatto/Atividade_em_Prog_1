#include <stdio.h> // Seu nome vem da express�o inglesa standard input-output header, que significa "cabe�alho padr�o de entrada/sa�da".
int main(){

    int num1, num2;
    //printf("Informe dois numeros\n");
    //printf("Primeiro Numero: ");
    scanf("%d", &num1);             // %d especificador de formato para o tipo de dado inteiro
    //printf("Segundo numero: ");
    scanf("%d", &num2);             // %d especificador de formato para o tipo de dado inteiro

    while( num1 < num2 )                //repeti��o de um bloco de instru��es enquanto uma condi��o � verdadeira
{
    printf("\n%d\n", num1);               // %d especificador de formato para o tipo de dado inteiro
    num1++;
}
}
