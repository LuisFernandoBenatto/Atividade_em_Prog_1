/*Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para poder andar neles.

O parque Ambrolândia possui 3 brinquedos que possuem essa limitação:

Barca Viking: 1,5m de altura e 12 anos.

Elevator of Death: 1,4m de altura e 14 anos.

Final Killer: 1,7m de altura ou 16 anos.

Dada a altura e a idade de uma pessoa, faça um programa que identifique quantos brinquedos ele pode andar.

Dois inteiros, F e I, representando a altura (em cm) e a idade, respectivamente.


O número de brinquedos que ele pode andar no parque, seguido de uma quebra de linha.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int altura, idade;

    scanf("%d %d", &altura, &idade);

    if(idade >= 16 && altura > 150){
        printf("\n 3");
    }
    else if(altura < 150 && idade < 16 || idade < 13 && altura <){
        printf("\n 1");
    }
    else if (){
        printf("\n 2");
    }
    else if (){
        printf("\n 3");
    }

    system("pause");
	return 0;
}
