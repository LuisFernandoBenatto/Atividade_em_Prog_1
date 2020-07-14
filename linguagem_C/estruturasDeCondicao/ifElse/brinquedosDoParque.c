#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int altura, idade, pontos;

    scanf("%d %d", &altura, &idade);
    pontos = 0;

    if (altura >= 150 && idade >= 12){
        pontos = pontos + 1;
    }
    if (altura >= 140 && idade >= 14){
        pontos = pontos + 1;
    }
    if (altura >= 170 || idade >= 16){
        pontos = pontos + 1;
    }
    printf("%d \n",pontos);

    system("pause");
	return 0;
}
