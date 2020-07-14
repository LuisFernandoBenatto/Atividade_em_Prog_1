/*1. Altere o programa do exerc�cio do sal�rio para que aumento seja conforme a tabela abaixo:



Em seguida, teste com os valores: 1000, 2000, 2050, 2100, 2150, 5000, 6000, 8000, 8100 e 20000. Use a calculadora para verificar suas sa�das.
*/

#include <stdio.h>
#include <math.h>
int main (){

    double Salario;

    scanf("%lf", &Salario);

    if( Salario <= 2000) {
        printf("\n R$ %.2lf \n", Salario * 1.20);
    }
    else if( Salario > 2000 && Salario <= 2100) {
        printf("\n R$ %.2lf \n", Salario * 1.18);
    }
    else if( Salario > 2100 && Salario <= 5000) {
        printf("\n R$ %.2lf \n", Salario * 1.15);
    }
    else if( Salario > 5000 && Salario <= 8000) {
        printf("\n R$ %.2lf \n", Salario * 1.12);
    }
    else if( Salario > 8000) {
        printf("\n R$ %.2lf \n", Salario * 1.10);
    }
    else

    system ("pause");
    return 0;

}
