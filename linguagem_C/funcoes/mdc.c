#include <stdio.h>

int MDC(int a, int b);

int main(){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);

    printf("O valor MDC: %d\n", MDC(a,b));

    system("pause");
    return 0;
}
int MDC(int a, int b){

    int aux;
    if(a < b){
       aux = a;
       a = b;
       b = aux;
    }
    while(b != 0){
       aux = b;
       b = a % b;
       a = aux;
    }
    return a;
}
