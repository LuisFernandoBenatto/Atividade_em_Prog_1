#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void rot(char *secreta){
    int i;
    for(i = 0; secreta[i] != '\0'; i++){
        if(secreta[i] >= 'A' && secreta[i] <= 'M'|| secreta[i] >= 'a' && secreta[i] <= 'm'){
            secreta[i]+= 13;
        }
        else if(secreta[i] >= 'N' && secreta[i] <= 'Z'|| secreta[i] >= 'n' && secreta[i] <= 'z'){
            secreta[i]-= 13;
        }
    }
}
int main(){
    char string[50];
    fgets(string,50,stdin);
    rot(&string);
    puts(string);
    return 0;
}
