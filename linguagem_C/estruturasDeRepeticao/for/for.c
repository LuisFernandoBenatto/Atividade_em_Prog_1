#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n, contador;

    scanf("%d", &n);

    for (contador = n; contador >= 0; contador--){
        printf("%d ", contador);
    }
    
    system("pause");
    return 0;
}
