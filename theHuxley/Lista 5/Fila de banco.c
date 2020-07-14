/*
Fila de banco é sempre uma dor de cabeça. No Banco do Brasilo, existem apenas dois caixas para atender as pessoas. Porém, toda hora do almoço é um problema, pois existem duas filas de pessoas e um dos funcionários precisa ir comer. Então, as duas filas precisam ser integradas. Sempre dá confusão. Para minimizar o problema, o gerente do banco, muito sovina, ao invés de contratar mais um funcionário, propôs a seguinte solução. As pessoas da fila do funcionário que foi almoçar devem ser intercaladas com as pessoas da fila do funcionário que ficou trabalhando, a partir da segunda posição. E haja confusão!

Formato de entrada

Consiste dos inteiros n, m e k (0<=n <=10000, 0<=m <=10000, 1<=k<=2) correspondendo, respectivamente, a quantidade de pessoas que existem em cada fila e qual foi à fila que o funcionário foi almoçar, sendo k=1 para a primeira fila e k=2 para a segunda fila. Seguidos de n inteiros representando as pessoas da primeira file e m inteiros representando as pessoas da segunda fila. Os inteiros nunca se repetem.

Formato de saída

Consiste em uma sequência de inteiros, um em cada linha representando as pessoas da nova fila.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, m, k;
        scanf("%d%d%d",&n,&m,&k);
    int f1[n], f2[m];
    int i,j;

    for(i = 0; i < n; i++){
        scanf("%d",&f1[i]);
    }
    for(i = 0; i < m; i++){
        scanf("%d",&f2[i]);
    }
    if(k == 1){
        for(i = 0,j = 0; i < n && j < m; i++, j++){
            printf("%d\n%d\n", f2[j],f1[i]);
        }
        if(i == n && j < m){
            for(;j < m; j++){
                printf("%d\n",f2[j]);
            }
        }
        else if(i < n && j == m){
            for(;i < n; i++){
                printf("%d\n",f1[i]);
            }
        }
    }
    else if(k == 2){
         for(i = 0,j = 0; i < n && j < m; i++, j++){
            printf("%d\n%d\n", f1[i],f2[j]);
        }
        if(i == n && j < m){
            for(;j < m; j++){
                printf("%d\n",f2[j]);
            }
        }
        else if(i < n && j == m){
            for(;i < n; i++){
                printf("%d\n",f1[i]);
            }
        }
    }
    system("pause");
	return 0;
}
