/*O Festival Internacional de Balonismo de Albuquerque é um grande evento para o estado do Novo México.
Turistas de diversos cantos do mundo vão para competir, se exibir, ou apenas apreciar tal evento.
Nesse festival, há também os balões de passeio, onde os turistas podem fazer uma curta viagem e admirar a paisagem local.

Porém, esse ano, os balonistas que acompanham os turistas entraram em greve. E para não ter prejuizo, o dono de alguns balões, que é seu amigo, lembrou que você sabe programar.

E pediu para você criar um programa que automatizasse os balões, para que ele voasse sem a necessidade de um balonista profissional ao lado, com os proprios turistas o controlando.

Ele quer que o balão tenha os seguintes comandos:

Subir.
Frente.
Dar a volta.

Descer.


Para todos os comandos, o balão se movimenta 10 metros:

Subir: 10 metros para cima.

Frente: 10 metros no sentido atual.

Descer: 10 metros para baixo.

Dar a volta: 10 metros no sentido atual e depois inverte o sentido.

Porém, ele te advertiu das condições de segurança:

O balão não pode ultrapassar 200 metros de altura.
Não pode se afastar mais de 2 km do local inicial.

Então, você escreveu o seguinte programa:

Subir: S
Frente: F
Dar a volta: V
Descer: D

Dado N comandos, descubra a que altura (distância do chão)  e a que distância (distância HORIZONTAL à inicial) o balão se encontra do ponto de partida.

Formato de entrada

Um inteiro N, representando a quantidade de comandos operados no balão.
N linhas de caracteres, que podem ser: S (subir), F (frente), V (dar a volta), D (descer).

Formato de saída

Altura (distância do chão) e distância (distância HORIZONTAL à inicial) que o balão se encontra do ponto de partida.
Seguido de uma quebra de linha.



Obs: Se o balão estiver no chão, e tentar descer, ele nem se mexe.

Obs2: Se o balão chegar nas distancias de segurança, ele não consegue burlar, ou seja, chegar na distancia máxima e ir pra frente, ele não irá se mover, o mesmo serve para a altura.

Obs3: Se o balão estiver no chão, ele não pode ir pra frente e nem dar a volta.
*/


# include <stdio.h>
# include <string.h>

int main(){
    int subir = 0, frente = 0;
    int distancia, altura;
    int etapas=0;
    int i;
    char comandos;

    scanf("%d", &etapas);
    etapas = (etapas*2);

    for(i = 0; i < etapas; i++){
        scanf("%c", &comandos);

        if (comandos == 'S'){
            subir = subir + 10;
        }

        if (comandos != 'S' && subir > 0){
            if (comandos == 'D'){
                subir = subir - 10;
            }
            else if (comandos == 'F'){
                frente = frente + 10;
            }
            else if (comandos == 'V'){
                frente = frente + 10;
                for(i = i+1; i < etapas; i++){
                    scanf("%c", &comandos);
                    if (comandos == 'F'){
                        frente = frente - 10;
                    }
                    else{
                        continue;
                    }
                }
            }

        }
    }
    altura = subir;
    distancia = frente;

    if (altura < 0){
        altura = 0;
    }

    if (altura >= 200){
        altura = 200;
    }

    if (distancia < 0){
        distancia *= -1;
    }

    if (distancia >= 2000){
        distancia = 2000;
    }

    printf("%d %d\n", altura, distancia);
    return 0;
}
