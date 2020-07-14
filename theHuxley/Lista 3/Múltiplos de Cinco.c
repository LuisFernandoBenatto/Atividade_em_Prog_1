#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num = 0, num2 = 0;

    scanf("%d %d", &num, &num2);

    for ( ; num <= num2; num++ ){
        if (num % 5 == 0){
                printf("%d", num);
                if (num + 5 <= num2){
                    printf ("|", num);
                }
        }
    }
    return 0;
}
