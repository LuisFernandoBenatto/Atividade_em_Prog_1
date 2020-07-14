/*
   **** STRINGS ****

   •CHAR C[9] = "PROGRAMA";
   •CHAR [] = "CASA";

   **** |1|2|3|4| 5|6|7|8|9|10| ****
   **** |C|A|S|A|\0|?|?|?|?|? | ****

   SCANF("%s",c);
   •••sem o &•••

   fgets(char str[], int num, FILE * stream);


   1 char frase[19];
   2 fgets(frase,19,stdin);

        **** STDIN ****

   |15| |r|o|n|a|l|d|o|\0|
   scanf("%d%c",&i);

   char uma_string[255];
   gets(uma_string);


   PARA IMPRIMIR UMA STRING

   printf("%s\n");
   puts(frase)

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[20] = "ronaldo";
    char nome2[20];

    printf("%s\n", nome);

    fgets(nome2, 20, stdin);
    //puts(nome2);

    for(int i = 0; i < 20; i++){
        if(nome2[i] == '\0'){
            break;
        }
     printf("%c", nome2[i]);
    }

    system("pause");
    return 0;
}


