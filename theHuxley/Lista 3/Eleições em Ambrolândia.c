/*Escreva um programa que transforme o computador numa urna eletr�nica para elei��o, em segundo turno, para presidente de um pa�s chamado Ambrol�ndia. Nessas elei��es concorrem os candidatos 83-Alibab� e 93-Alcapone. Cada voto deve ser dado pelo n�mero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos j� citados � considerado nulo. No final da elei��o o programa deve emitir um relat�rio contendo a vota��o de cada candidato, a quantidade votos em branco, a quantidade de votos nulos e o candidato eleito e os respectivos percentuais.

Em Ambrol�ndia, o percentual de votos � calculado considerando os votos v�lidos. O voto nulo n�o � considerado um voto v�lido. Entretanto, o voto em branco � considerado um voto v�lido.

Formato de entrada

A entrada consiste de um conjunto de n�meros inteiros, um por linha. A elei��o termina quando o n�mero digitado � -1.

O n�mero de inteiros dados � maior que um e menor que cem milh�es.

Considere tamb�m que cada candidato tem pelo menos um voto.

Formato de sa�da

A sa�da consiste de um relat�rio impresso no seguinte formato:

x

y

z

w

k

a

b



Onde, x � quantidade de votos do candidato Alibab�, y a quantidade de votos do candidato Alcapone, z a quantidade de votos em branco, w a quantidade de votos nulos, k � o n�mero 83 ou 93 indicando qual foi o candidato vencedor, a � o percentual de votos do candidato Alibab� e b � o percentual de votos do candidato Alcapone.

O percentual de votos deve ser impresso com duas casas decimais e sem o sinal de porcentagem. Exemplo, para representar trinta e quatro ponto vinte e cinco porcento voc� deve imprimir: 34.25



Considere tamb�m que sempre haver� um candidato vencedor, ou seja, nunca haver� um empate.
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
