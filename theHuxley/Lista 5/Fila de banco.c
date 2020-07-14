/*
Fila de banco � sempre uma dor de cabe�a. No Banco do Brasilo, existem apenas dois caixas para atender as pessoas. Por�m, toda hora do almo�o � um problema, pois existem duas filas de pessoas e um dos funcion�rios precisa ir comer. Ent�o, as duas filas precisam ser integradas. Sempre d� confus�o. Para minimizar o problema, o gerente do banco, muito sovina, ao inv�s de contratar mais um funcion�rio, prop�s a seguinte solu��o. As pessoas da fila do funcion�rio que foi almo�ar devem ser intercaladas com as pessoas da fila do funcion�rio que ficou trabalhando, a partir da segunda posi��o. E haja confus�o!

Formato de entrada

Consiste dos inteiros n, m e k (0<=n <=10000, 0<=m <=10000, 1<=k<=2) correspondendo, respectivamente, a quantidade de pessoas que existem em cada fila e qual foi � fila que o funcion�rio foi almo�ar, sendo k=1 para a primeira fila e k=2 para a segunda fila. Seguidos de n inteiros representando as pessoas da primeira file e m inteiros representando as pessoas da segunda fila. Os inteiros nunca se repetem.

Formato de sa�da

Consiste em uma sequ�ncia de inteiros, um em cada linha representando as pessoas da nova fila.
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
