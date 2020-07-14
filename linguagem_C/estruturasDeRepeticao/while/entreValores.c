#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num = 0, num2 = 0;

    scanf("%d", &num);
    scanf("%d", &num2);

    while (num < num2 - 1){
            num = num + 1;

            printf("%d ", num);
    }

    system("pause");
    return 0;
}
