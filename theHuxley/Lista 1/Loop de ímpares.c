#include <stdio.h> // Seu nome vem da expressão inglesa standard input-output header, que significa "cabeçalho padrão de entrada/saída".
int main(){

    int num1, num2;
    //printf("Informe dois numeros\n");
    //printf("Primeiro Numero: ");
    scanf("%d", &num1);             // %d especificador de formato para o tipo de dado inteiro
    //printf("Segundo numero: ");
    scanf("%d", &num2);             // %d especificador de formato para o tipo de dado inteiro

    while( num1 < num2 )                //repetição de um bloco de instruções enquanto uma condição é verdadeira
{
    printf("\n%d\n", num1);               // %d especificador de formato para o tipo de dado inteiro
    num1++;
}
}
