/*
Descrição
Dados 04 números inteiros, calcule o produto entre eles caso os 04 números digitados sejam números primos.

Se algum deles não for primo, imprima: SEM PRODUTO

Formato de entrada

4 números inteiros

Formato de saída

O resultado da multiplicação entre eles, caso os 04 sejam primos ou SEM PRODUTO, caso contrário.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Primos(int a, int b, int c, int d);

int main(){

    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);


    if(Primos(a,b,c,d)== 0){
        printf("SEM PRODUTO\n");
    }else{
        printf("%d\n",Primos(a,b,c,d));
    }

    system("pause");
    return 0;
}
int Primos(int a, int b, int c, int d){

    int produto = 0;

    if (a == 0 || b == 0 || c == 0 || d == 0){
        return 0;
    }
    if (a == 1 || b == 1 || c == 1 || d == 1){
        return 0;
    }

    else if(a % 2 != 1 && a != 2){
            return 0;
       if(a % 3 != 1){
           return 0;
          if(a % 5 != 1){
              return 0;
            if(a % 7 != 1){
                return 0;
                if(a % 9 != 1){
                    return 0;
              }
            }
          }
        }
      }

    else if(b % 2 != 1 && b != 2){
            return 0;
       if(b % 3 != 1){
           return 0;
          if(b % 5 != 1){
              return 0;
            if(b % 7 != 1){
                return 0;
                if(b % 9 != 1){
                    return 0;
              }
            }
          }
        }
      }
    else if(c % 2 != 1 && c != 2){
        return 0;
       if(c % 3 != 1){
           return 0;
          if(c % 5 != 1){
              return 0;
            if(c % 7 != 1){
                return 0;
                if(c % 9 != 1){
                    return 0;
              }
            }
          }
        }
      }
    else if(d % 2 != 1 && d != 2){
        return 0;
       if(d % 3 != 1){
           return 0;
          if(d % 5 != 1){
              return 0;
            if(d % 7 != 1){
                return 0;
                if(d % 9 != 1){
                    return 0;
              }
            }
          }
        }
      }

    else{
      produto = a*b*c*d;
      return produto;
    }


}
