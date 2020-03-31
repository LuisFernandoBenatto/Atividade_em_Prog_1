#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main(){
    int x;
    printf("Informe o valor de x: ");
    scanf("%ld", &x);
    printf("O numero da posiçao %d e: %d\n", x, fibonacci(x));
    system("pause");
    return 0;
}
