/*Após saber da criação da estrela da morte, a princesa Leia e seu amigo C3PO tentam buscar ajuda em outros planetas, porém nenhum dos dois sabem pilotar a millenium falcon, tendo isso em mente,
a princesa Leia solicitou sua ajuda para fazer um programa que ajudasse a nave a desviar dos obstáculos.

Seu programa consiste em receber um obstáculo, e informa por onde a nave deve passar.
Os obstáculos são dados a você através de matrizes triangulares (3 linhas x 3 colunas)
que o C3PO conseguiu elaborar, no qual qualquer valor diferente de 0 é uma estrutura sólida, e os valores 0 são onde pode passar.

Caso você receba uma matriz triangular superior, deve informar para atravessar “Por baixo” e caso receba uma matriz triangular inferior,
atravessar “Por cima”, caso não receba nem triangular superior e nem inferior, “Nao pode atravessar”.

Obs: Matrizes que tenham o valor 0, mas ele não faz parte da matriz triangular superior ou inferior, o 0 deve ser considerado como estrutura sólida.

Formato de entrada
Séries de Matrizes 3x3 seguido de uma linha em branco.

Exemplo:

A1 A2 A3

B1 B2 B3

C1 C2 C3


A1 A2 A3

B1 B2 B3

C1 C2 C3

Formato de saída

Imprimir:

"Por cima" - Caso seja triangular inferior;
"Por baixo" - Caso seja triangular superior;
"Nao pode atravessar" - Caso não seja nem triangular superior nem inferior.

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int falcon[3][3];
    int num = 0;
    int i,j;

    do{
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++){
                // Num sera o valor armazenado na matriz
                num = -1;
                scanf("%d", &num);
                if (num == -1){
                    break;
                }
                falcon[i][j] = num;
            }
        }
        if (num != -1){
            // Logica da matriz triangular
            if (falcon[1][0] == 0 && falcon[2][0] == 0 && falcon[2][1] == 0){
                printf("Por baixo\n");
            }
            else if (falcon[0][2] == 0 && falcon[1][2] == 0){
                printf("Por cima\n");
            }
            else{
                printf("Nao pode atravessar\n");
            }
        }
    }while(num != -1);

    system("pause");
	return 0;
}


