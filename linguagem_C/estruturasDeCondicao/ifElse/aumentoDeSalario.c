#include <stdio.h>
#include <math.h>
int main (){

    float Salario;// poderia ser double

    scanf("%f", &Salario);// scanf ("%lf", &Salario);

    if( Salario <= 1000 ) {
        printf("\n R$ %.2f \n", Salario + ( Salario * 15/100 ));// ou salario = salario * 1.15;
    }
    else if( Salario > 1000 && Salario <= 2000) {
        printf("\n R$ %.2f \n", Salario + ( Salario * 10/100 ));// ou salario = salario * 1.10;
    }
    else if( Salario > 2000) {
        printf("\n R$ %.2f \n", Salario + ( Salario * 5/100 ));// ou salario = salario * 1.05;
    }
    system ("pause");
    return 0;

}
