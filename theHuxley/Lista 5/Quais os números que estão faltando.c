/*Dado dois arrays de números inteiros imprima os númeors do primeiro array que não estão presentes no segundo array.

Formato de entrada

Serão dadas duas linhas, correspondendo aos dois arrays.

Nos números de cada linha são separados por espaços.

Formato de saída

Imprima em ordem decrescente os números do primeiro array que não estão presentes no segundo array.

Os números devem ser impressos todos em uma única linha e separados por um espaço.

Depois do último número não deve existir um espaço.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x[20], y[20];
    int n, m, a, b, i, p = 0, q;
    char esp;

    for(n = 0; esp != '\n'; n++){
        scanf("%d%c",&x[n], &esp);
    }
    for(m = 0; y[m] != -1; m++){
        scanf("%d",&y[m]);
    }
    for(a = 0; a < n; a++){
        for(b = 0; b < m; b++){
            if(x[a] != y[b]){
                i = 0;
            }else{
                i = 1;
                break;
            }
        }
        if(i == 0){
            p++;
        }
    }
    int r[p];
    for(a = 0, q = 0; a < n; a++){
        for(b = 0; b < m; b++){
            if(x[a] != y[b]){
                i = 0;
            }else{
                i = 1;
                break;
            }
        }
        if(i == 0){
            r[q] = x[a];
            q++;
        }
    }
    for(q = 0; q < p - 1; q++){
        if(r[q] < r[q+1]){
            i = r[q];
            r[q]=r[q+1];
            r[q+1] = i;
            q= -1;
        }
    }
    for(q = 0; q < p; q++){
        printf("%d", r[q]);
    }
    system("pause");
	return 0;
}
