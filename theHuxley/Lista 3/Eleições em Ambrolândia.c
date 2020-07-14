/*Escreva um programa que transforme o computador numa urna eletrônica para eleição, em segundo turno, para presidente de um país chamado Ambrolândia. Nessas eleições concorrem os candidatos 83-Alibabá e 93-Alcapone. Cada voto deve ser dado pelo número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos já citados é considerado nulo. No final da eleição o programa deve emitir um relatório contendo a votação de cada candidato, a quantidade votos em branco, a quantidade de votos nulos e o candidato eleito e os respectivos percentuais.

Em Ambrolândia, o percentual de votos é calculado considerando os votos válidos. O voto nulo não é considerado um voto válido. Entretanto, o voto em branco é considerado um voto válido.

Formato de entrada

A entrada consiste de um conjunto de números inteiros, um por linha. A eleição termina quando o número digitado é -1.

O número de inteiros dados é maior que um e menor que cem milhões.

Considere também que cada candidato tem pelo menos um voto.

Formato de saída

A saída consiste de um relatório impresso no seguinte formato:

x

y

z

w

k

a

b



Onde, x é quantidade de votos do candidato Alibabá, y a quantidade de votos do candidato Alcapone, z a quantidade de votos em branco, w a quantidade de votos nulos, k é o número 83 ou 93 indicando qual foi o candidato vencedor, a é o percentual de votos do candidato Alibabá e b é o percentual de votos do candidato Alcapone.

O percentual de votos deve ser impresso com duas casas decimais e sem o sinal de porcentagem. Exemplo, para representar trinta e quatro ponto vinte e cinco porcento você deve imprimir: 34.25



Considere também que sempre haverá um candidato vencedor, ou seja, nunca haverá um empate.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int voto_atual;
    float qtdAlibaba = 0, qtdAlcapone = 0, votos_em_branco = 0 , votos_nulos = 0;
    double percentual_Alibaba, percentual_Alcapone;

    while(voto_atual != -1){
        cin >> voto_atual;

        if(voto_atual == -1){
            break;
        }

        switch (voto_atual){
            case 83:
                qtdAlibaba++;
                break;

            case 93:
                qtdAlcapone++;
                break;

            case 0:
                votos_em_branco++;
                break;

            default:
                votos_nulos++;
                break;
        }


    }

    percentual_Alibaba = ((qtdAlibaba*100)/(qtdAlcapone+qtdAlibaba+votos_em_branco));
    percentual_Alcapone = ((qtdAlcapone*100)/(qtdAlcapone+qtdAlibaba+votos_em_branco));

    cout << qtdAlibaba << endl;
    cout << qtdAlcapone << endl;
    cout << votos_em_branco << endl;
    cout << votos_nulos << endl;
    qtdAlcapone >= qtdAlibaba ? printf("93\n") : printf("83\n");
    printf("%.2lf\n", percentual_Alibaba);
    printf("%.2lf\n", percentual_Alcapone);


    return 0;
}
