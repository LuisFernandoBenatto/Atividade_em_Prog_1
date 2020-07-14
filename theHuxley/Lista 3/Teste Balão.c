#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int Subir = 0, Frente = 0, Descer = 0, Dar_a_volta = 0;
    int Distancia = 0, Altura = 0;
    int etapas, aux;
    char comandos;

    scanf("%d\n",&etapas);

    for (aux = etapas; aux > 0; aux--){
        scanf("%c\n",&comandos);

        if (comandos == 'S'){
            Subir = Subir + 10;
        }
        if (comandos != 'S' && Subir > 0){

            if (comandos == 'D'){
                Subir = Subir - 10;
            }
            else if (comandos == 'F'){
                Frente = Frente + 10;
            }
            else if (comandos == 'V'){
                Frente = Frente - 10;
            }
      }
    }
    Altura = Subir - Descer;
    Distancia = Frente;

    if (Altura < 0){
        Altura = 0;
    }
    if (Altura >= 200){
        Altura = 200;
    }
    if (Distancia < 0){
        Distancia = Distancia * (-1);
    }
    if (Distancia >= 2000){
        Distancia = 2000;
    }

    printf("%d %d\n", Altura, Distancia);

    system("pause");
    return 0;

}
