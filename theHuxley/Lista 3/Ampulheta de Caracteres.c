/*A ampulheta é um dos instrumento de medição de tempo mais antigos da humanidade. É constituída por duas âmbulas iguais (recipientes que contem areia), por duas hastes que as suportam e areia. A areia dentro da ampulheta deve preencher uma âmbula por completo e deixar a outra totalmente vazia. Seu programa deve imprimir na tela uma ampulheta com âmbulas triângulares de lado l e seus respectivos níveis de areia, superior e inferior.

Formato de entrada

Entrada inicial:
		N - Numéro de casos                       (N € Naturais  | N >= 0)

	Onde cada caso é composto de mais duas entradas:
		l - Lados das âmbulas(triângulares)    (l € Naturais* | 3 < l < 40)
                i - Nível inferior de areia                  (i € Naturais  | i < l-2)

EXEMPLO:
3
5
2
7
3
10
5

Formato de saída

Para o exemplo acima:

Caso 1:
** * * * **
* *     * *
*  *   *  *
*   *.*   *
*    *    *
*    *    *
*   * *   *
*  *...*  *
* *.....* *
** * * * **
Caso 2:
** * * * * * **
* *         * *
*  *       *  *
*   *     *   *
*    *...*    *
*     *.*     *
*      *      *
*      *      *
*     * *     *
*    *   *    *
*   *.....*   *
*  *.......*  *
* *.........* *
** * * * * * **
Caso 3:
** * * * * * * * * **
* *               * *
*  *             *  *
*   *           *   *
*    *         *    *
*     *       *     *
*      *.....*      *
*       *...*       *
*        *.*        *
*         *         *
*         *         *
*        * *        *
*       *   *       *
*      *     *      *
*     *.......*     *
*    *.........*    *
*   *...........*   *
*  *.............*  *
* *...............* *
** * * * * * * * * **

Repare que os lados da ampulheta são preenchidos por asterísticos e os "níveis" das âmbulas são representados por linhas de pontos.

BAIXE OS EXEMPLO DE ENTRADA E SAÍDA PARA VISUALIZAR MELHOR.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int N, i, l;
    int casoatual, espacos, asteriscos, linha_atual, reposicao_de_char, espacos_no_centro, aux;

    scanf("%d", &N);

    for(casoatual = 1; casoatual <= N; casoatual++){
        scanf("%d%d", &l, &i);
        printf("Caso %d:\n", casoatual);

        linha_atual = 1;
        espacos_no_centro = (l*2) - 5;
        aux = l-2;

        while(linha_atual <= (2*l)){
            // Construcao das bases
            if((linha_atual == 1) || (linha_atual == (2*l))){
                // Primeiro * da base
                printf("*");
                for(reposicao_de_char = (2*l-1), asteriscos = l, espacos = (l-1); reposicao_de_char > 0; reposicao_de_char--){
                    if(asteriscos > 0){
                        // Resto dos * da base
                        printf("*");
                        asteriscos--;
                    }
                    if(espacos > 0){
                        // Espaçoes entre os * da base
                        printf(" ");
                        espacos--;
                    }
                }
                linha_atual++;
                // Ultimo * da base
                printf("*\n");
            }
            else{
                // Lateral esquerda
                printf("*");
                if(linha_atual <= (l-1)){
                    for(espacos = (linha_atual - 1); espacos > 0; espacos--){
                        // Espacos entre a lateral esquerda e a ampulheta
                        printf(" ");
                    }
                    // Lado esquerdo da ampulheta
                    printf("*");
                    if((i < (l-2)) && (linha_atual >= (l-(l-2-i)))){
                        for(espacos = espacos_no_centro; espacos >= 1; espacos--){
                            // Nivel superior
                            printf(".");
                        }
                    }
                    else{
                        for(espacos = espacos_no_centro; espacos >= 1; espacos--){
                            // Espaçoes entre os lados da ampulheta
                            printf(" ");
                        }
                    }
                        // Lado direito da ampulheta
                        printf("*");
                        for(espacos = (linha_atual - 1); espacos > 0; espacos--){
                            // Espaços entre a lateral direita e a ampulheta
                            printf(" ");
                    }
                    espacos_no_centro = espacos_no_centro - 2;
                }
                else if((linha_atual == l) || (linha_atual == (l+1))){
                    for(espacos = (l - 1); espacos > 0; espacos--){
                        // Espaço no centro lado esquerdo
                        printf(" ");
                    }
                    // * * do centro
                    printf("*");
                    for(espacos = (l - 1); espacos > 0; espacos--){
                        // Espaço no centro lado direito
                        printf(" ");
                    }
                }
                else{
                    espacos_no_centro = espacos_no_centro + 2;
                    for(espacos = aux; espacos > 0; espacos--){
                        // Espaço inferior entre a lateral esquerda e a ampulheta
                        printf(" ");
                    }
                    // Lado esquerdo inferior da ampulheta
                    printf("*");
                    if(linha_atual >= ((2*l)-(i))){
                        for(espacos = espacos_no_centro; espacos >= 1; espacos--){
                            // Nivel inferior
                            printf(".");
                        }
                    }
                    else{
                        for(espacos = espacos_no_centro; espacos >= 1; espacos--){
                            // Espaço sob o nivel inferior
                            printf(" ");
                        }
                    }
                    // Lado direito infeiror da ampulheta
                    printf("*");
                    for(espacos = aux; espacos > 0; espacos--){
                        // Espaço inferior entre a lateral direita e a ampulheta
                        printf(" ");
                    }
                    aux--;
                }
                linha_atual++;
                // Lateral direita da ampulheta
                printf("*\n");
            }
        }
    }
    system("pause");
    return 0;
}
