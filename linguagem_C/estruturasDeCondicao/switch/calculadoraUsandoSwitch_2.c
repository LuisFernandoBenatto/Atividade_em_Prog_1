#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double num1 = 0;
    double num2 = 0;
    double total = 0;
    char simbolo;

    scanf("%c", &simbolo);
    scanf("%lf", &num1);
    scanf("%lf", &num2);


    switch (simbolo){//escolha a operação
               case '+'://caso
                   printf("%.5lf\n", total = num1 + num2);
                   break;
               case '-':
                   printf("%.5lf\n", total = num1 - num2);
                   break;
               case '*':
                   printf("%.5lf\n", total = num1 * num2);
                   break;
               case '/':
                   printf("%.5lf\n", total = num1 / num2);
                   break;
            /*   case '%':
                   printf("%.5lf\n", total = num1 % num2);
                   break; */
               default:// padrao
                   printf("codigo invalido\n");
    }
    system("pause");
    return 0;
}
