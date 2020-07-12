#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAMANHO 3

int main(){
    float num[TAMANHO];
    float a = 0.0, b = 0.0, c = 0.0;

    for(int i=0; i < TAMANHO; i++){
        scanf("%f", &num[i]);
    }
    for(int i=0; i < TAMANHO; i++){
        if(num[0] >= num[1] && num[0] >= num[2]){
                if(num[1] >= num[2]){
                    a = num[2];
                    b = num[1];
                    c = num[0];
                }else if(num[2] >= num[1]){
                    a = num[1];
                    b = num[2];
                    c = num[0];
                }
        }
        else if(num[1] >= num[0] && num[1] >= num[2]){
                if(num[2] >= num[0]){
                    a = num[0];
                    b = num[2];
                    c = num[1];
                }else if(num[0] >= num[2]){
                    a = num[2];
                    b = num[0];
                    c = num[1];
                }
        }
        else if(num[2] >= num[0] && num[2] >= num[1]){
                if(num[1] >= num[0]){
                    a = num[0];
                    b = num[1];
                    c = num[2];
                }else if(num[0] >= num[1]){
                    a = num[1];
                    b = num[0];
                    c = num[2];
                }
        }
    }
    printf("%.2f  %.2f  %.2f",a,b,c);
    printf("\n");
    system("pause");
    return 0;
}
