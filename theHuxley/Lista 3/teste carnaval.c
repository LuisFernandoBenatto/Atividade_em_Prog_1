#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main(){

    float nota1, nota2, nota3, nota4, nota5;
    float notafinal = 0;

    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);

    if (nota1 == nota2 && nota2 == nota3 && nota3 == nota4 && nota4 == nota5 && nota5 == nota1){
            notafinal = nota1 + nota3 + nota4;
            printf("%.1f\n", notafinal);
            return 0;
    }



    else if (nota1 >= nota2 && nota1 >= nota3 && nota1 >= nota4 && nota1 >= nota5){
        if(nota5 <= nota2 && nota5 <= nota3 && nota5 <= nota4){
            notafinal = nota2 + nota3 + nota4;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota4 <= nota2 && nota4 <= nota3 && nota4 <= nota5){
            notafinal = nota2 + nota3 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota3 <= nota2 && nota3 <= nota4 && nota3 <= nota5){
            notafinal = nota2 + nota4 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota2 <= nota3 && nota2 <= nota4 && nota2 <= nota5){
            notafinal = nota3 + nota4 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }

    }



    else if (nota2 >= nota1 && nota2 >= nota3 && nota2 >= nota4 && nota2 >= nota5){
        if(nota5 <= nota1 && nota5 <= nota3 && nota5 <= nota4){
            notafinal = nota1 + nota3 + nota4;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota4 <= nota1 && nota4 <= nota3 && nota4 <= nota5){
            notafinal = nota1 + nota3 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota3 <= nota1 && nota3 <= nota4 && nota3 <= nota5){
            notafinal = nota1 + nota4 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota1 <= nota3 && nota1 <= nota4 && nota1 <= nota5){
            notafinal = nota3 + nota4 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }

    }



    else if (nota3 >= nota2 && nota3 >= nota1 && nota3 >= nota4 && nota3 >= nota5){
        if(nota5 <= nota1 && nota5 <= nota2 && nota5 <= nota4){
            notafinal = nota2 + nota1 + nota4;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota4 <= nota1 && nota4 <= nota2 && nota4 <= nota5){
            notafinal = nota2 + nota1 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota2 <= nota1 && nota2 <= nota4 && nota2 <= nota5){
            notafinal = nota1 + nota4 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota1 <= nota2 && nota1 <= nota4 && nota1 <= nota5){
            notafinal = nota1 + nota4 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }

    }



    else if (nota4 >= nota2 && nota4 >= nota1 && nota4 >= nota3 && nota4 >= nota5){
        if(nota5 <= nota1 && nota5 <= nota2 && nota5 <= nota3){
            notafinal = nota2 + nota1 + nota3;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota3 <= nota1 && nota3 <= nota2 && nota3 <= nota5){
            notafinal = nota2 + nota1 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota2 <= nota1 && nota2 <= nota3 && nota2 <= nota5){
            notafinal = nota1 + nota3 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota1 <= nota2 && nota1 <= nota3 && nota2 <= nota5){
            notafinal = nota2 + nota3 + nota5;
            printf("%.1f\n", notafinal);
            return 0;
        }

    }



    else if (nota5 >= nota2 && nota5 >= nota1 && nota5 >= nota3 && nota5 >= nota4){
        if(nota4 <= nota1 && nota4 <= nota2 && nota4 <= nota3){
            notafinal = nota2 + nota1 + nota3;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota3 <= nota1 && nota3 <= nota2 && nota3 <= nota4){
            notafinal = nota2 + nota1 + nota3;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota2 <= nota1 && nota2 <= nota3 && nota2 <= nota4){
            notafinal = nota1 + nota3 + nota4;
            printf("%.1f\n", notafinal);
            return 0;
        }
        if(nota1 <= nota2 && nota1 <= nota3 && nota1 <= nota4){
            notafinal = nota2 + nota3 + nota4;
            printf("%.1f\n", notafinal);
            return 0;
        }

    }


    system("pause");
    return 0;
}
