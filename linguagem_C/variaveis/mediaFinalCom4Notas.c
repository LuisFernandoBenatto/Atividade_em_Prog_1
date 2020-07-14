#include <stdio.h>
#include <stdlib.h>
int main (){
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    printf("Digite a terceira nota:");
    scanf("%f", &nota3);
    printf("Digite a quarta nota:");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("As tres notas foram %.2f; %.2f; %.2f; %.2f; \n ", nota1, nota2, nota3, nota4);
    printf("A media e: %.2f \n",media);

    system ("pause");
    return 0;
}
