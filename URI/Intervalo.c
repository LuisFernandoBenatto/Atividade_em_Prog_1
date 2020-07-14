#include <stdio.h>

int main() {
    double intervalo;//([0,25], (25,50], (50,75], (75,100])

    scanf("%lf", &intervalo);

    if (intervalo >= 0 && intervalo <= 25.00){
        printf("Intervalo [0,25]\n");
    }
    else if (intervalo > 25.00 && intervalo <= 50.00){
        printf("Intervalo (25,50]\n");
    }
    else if (intervalo > 50.00 && intervalo <= 75.00){
        printf("Intervalo (50,75]\n");
    }
    else if (intervalo > 75.00 && intervalo <= 100.00){
        printf("Intervalo (75,100]\n");
    }
    else{
        printf("Fora de intervalo\n");
    }
    system ("pause");
    return 0;
}
