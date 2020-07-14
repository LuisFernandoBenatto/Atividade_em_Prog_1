#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

   int num, cont = 0;

   scanf("%d", &num);

   do{
    printf("%d\n", cont);
    cont++;
   } while (cont <= num);

    system("pause");
    return 0;
}
