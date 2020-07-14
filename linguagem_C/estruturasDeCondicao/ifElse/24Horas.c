#include <stdio.h>
#include <math.h>

/*Faça um programa que receba as horas de um dia no formato 24 foras
e imprima “escuro”, caso a hora esteja entre 18 e 5. Os valores válidos
para hora consistem no intervalo: [0, 23].
*/

int main(){
    int noite;
    scanf("%d", &noite);

    if(noite >= 18 || noite <= 5) {
        printf("\n escuro \n");
    }
    system ("pause");
    return 0;
}
