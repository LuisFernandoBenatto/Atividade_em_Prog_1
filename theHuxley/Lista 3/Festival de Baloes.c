/*O Festival Internacional de Balonismo de Albuquerque � um grande evento para o estado do Novo M�xico.
Turistas de diversos cantos do mundo v�o para competir, se exibir, ou apenas apreciar tal evento.
Nesse festival, h� tamb�m os bal�es de passeio, onde os turistas podem fazer uma curta viagem e admirar a paisagem local.

Por�m, esse ano, os balonistas que acompanham os turistas entraram em greve. E para n�o ter prejuizo, o dono de alguns bal�es, que � seu amigo, lembrou que voc� sabe programar.

E pediu para voc� criar um programa que automatizasse os bal�es, para que ele voasse sem a necessidade de um balonista profissional ao lado, com os proprios turistas o controlando.

Ele quer que o bal�o tenha os seguintes comandos:

Subir.
Frente.
Dar a volta.

Descer.


Para todos os comandos, o bal�o se movimenta 10 metros:

Subir: 10 metros para cima.

Frente: 10 metros no sentido atual.

Descer: 10 metros para baixo.

Dar a volta: 10 metros no sentido atual e depois inverte o sentido.

Por�m, ele te advertiu das condi��es de seguran�a:

O bal�o n�o pode ultrapassar 200 metros de altura.
N�o pode se afastar mais de 2 km do local inicial.

Ent�o, voc� escreveu o seguinte programa:

Subir: S
Frente: F
Dar a volta: V
Descer: D

Dado N comandos, descubra a que altura (dist�ncia do ch�o)  e a que dist�ncia (dist�ncia HORIZONTAL � inicial) o bal�o se encontra do ponto de partida.

Formato de entrada

Um inteiro N, representando a quantidade de comandos operados no bal�o.
N linhas de caracteres, que podem ser: S (subir), F (frente), V (dar a volta), D (descer).

Formato de sa�da

Altura (dist�ncia do ch�o) e dist�ncia (dist�ncia HORIZONTAL � inicial) que o bal�o se encontra do ponto de partida.
Seguido de uma quebra de linha.



Obs: Se o bal�o estiver no ch�o, e tentar descer, ele nem se mexe.

Obs2: Se o bal�o chegar nas distancias de seguran�a, ele n�o consegue burlar, ou seja, chegar na distancia m�xima e ir pra frente, ele n�o ir� se mover, o mesmo serve para a altura.

Obs3: Se o bal�o estiver no ch�o, ele n�o pode ir pra frente e nem dar a volta.
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
