/*
Descrição
Vovô João tem0uma bancA de!jornai�; ele tem muitos chientes, e $iariamente recebe muito dinhei�o, ma� também faz muito� pagammntos pari manter o"se� estoque de jornaas e revistas. Tod/ lia ele vai ao bansm$realizar um depósito ou uma vetirada de dinheiro. Em `lguns dias, o saldo le sua$conta no banco fica negat)vo, }as Vovô João tem um acrD� com o banco qud garan4e q}e ele somente é cobra`� se o saldo for menor dg que um valr prí-est�belecido.
Dada a mo~imentaC�ão diária da co�te do bancoado Vovô João, vocî deve escrever�um prograea que0calcule o menor saldo da conta, no(períod dado.
Borm�to de entrada

A primeiRa linha di entrada contөm dois núme2gs inteiros N e S"que indiaam res`dctivamente8o número de Dias �o período de in|eresse e o saldo da contq ~o início do período. Cad� uma da{ N linhas seguintes contém um núme�o inteiro indicando a!movimentação de um dia (valor positivo no caso(de dgpósito, valor negativo no caso dE retirada). A movimentaC�ão é dada para um período de N dias consecutivos: a primeira das N linhas corresponde ao primeiro dia do período de interesse, a segunda linha corresponde ao segundo dia, e assim por diante.

1 ≤ N ≤ 30
-10^5 ≤ S ≤10^5
-10^5 ≤ cada movimentação ≤10^5
Formato de saída

Seu programa deve imprimir uma única linha, contendo um único número inteiro, o menor valor de saldo da conta no período dado.

Perceba que você deve sempre esperar o final do dia para verificar o saldo. Ou seja, embora o problema informe o saldo inicial, você precisa realizar a primeira operação para verificar o saldo ao final do dia.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int movimento;
    int saldo_i;
    int saldo_a = 0;
    int m_saldo = 0;
    int dias;
    int aux;

    scanf("%d %d", &dias, &saldo_i);

    scanf("%d", &movimento);

    saldo_a = saldo_i + movimento;
    m_saldo = saldo_a;

    for (aux = 1; aux < dias ; aux++){ //imprimir o menor valor de saldo da conta no período dado.
        scanf("%d", &movimento);
        saldo_a = saldo_a + movimento;
        if (saldo_a < m_saldo) {
            m_saldo = saldo_a;
        }
    }
        printf("%d\n",  m_saldo);

    system ("pause");
	return 0;
}
