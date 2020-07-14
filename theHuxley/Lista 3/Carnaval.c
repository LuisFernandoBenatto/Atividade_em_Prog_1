/*
Descrição
O Carnaval é um feriado celebrado normalmente em fevereiro, em muitas cidades brasileiras,
a principal atração são os desfiles de escolas de samba. As várias agremiações desfilam ao
som de seus sambas-enredos e são julgadas pela liga das escolas de samba para determinar
a campeã do Carnaval.

Cada agremiação é avaliada em vários quesitos; em cada quesito, cada escola recebe cinco
notas que variam de 5,0 a 10,0. A nota final da escola em um dado quesito é a soma das
três notas centrais recebidas pela escola, excluindo a maior e a menor das cinco notas.

Como existem muitas escolas de samba e muitos quesitos, o presidente da liga pediu que
você escrevesse um programa que, dadas as notas da agremiação, calcula a sua nota final
num dado quesito.

Formato de entrada

A entrada contém uma única linha, contendo cinco números Ni (1 <= i <= 5), todos com uma
casa decimal, indicando as notas recebidas pela agremiação em um dos quesitos.

Considere:

5.0 <= Ni <= 10.0

Formato de saída

Seu programa deve imprimir uma única linha, contendo um único número com exatamente
uma casa decimal, a nota final da escola de samba no quesito considerado.

Exemplos de:
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stddef.h>
int main(){

    double nota1, nota2, nota3, nota4, nota5;
    double notafinal = 0;

    scanf("%lf %lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4, &nota5);

    if (nota1 == nota2 && nota2 == nota3 && nota3 == nota4 && nota4 == nota5 && nota5 == nota1){
            notafinal = nota1 + nota3 + nota4;
            printf("%.1lf\n", notafinal);
            return 0;
    }
    else if (nota1 >= nota2 && nota1 >= nota3 && nota1 >= nota4 && nota1 >= nota5){
        if(nota5 <= nota2 && nota5 <= nota3 && nota5 <= nota4){
            notafinal = nota2 + nota3 + nota4;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota4 <= nota2 && nota4 <= nota3 && nota4 <= nota5){
            notafinal = nota2 + nota3 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota3 <= nota2 && nota3 <= nota4 && nota3 <= nota5){
            notafinal = nota2 + nota4 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota2 <= nota3 && nota2 <= nota4 && nota2 <= nota5){
            notafinal = nota3 + nota4 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }

    }
    else if (nota2 >= nota1 && nota2 >= nota3 && nota2 >= nota4 && nota2 >= nota5){
        if(nota5 <= nota1 && nota5 <= nota3 && nota5 <= nota4){
            notafinal = nota1 + nota3 + nota4;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota4 <= nota1 && nota4 <= nota3 && nota4 <= nota5){
            notafinal = nota1 + nota3 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota3 <= nota1 && nota3 <= nota4 && nota3 <= nota5){
            notafinal = nota1 + nota4 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota1 <= nota3 && nota1 <= nota4 && nota1 <= nota5){
            notafinal = nota3 + nota4 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }

    }
    else if (nota3 >= nota2 && nota3 >= nota1 && nota3 >= nota4 && nota3 >= nota5){
        if(nota5 <= nota1 && nota5 <= nota2 && nota5 <= nota4){
            notafinal = nota2 + nota1 + nota4;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota4 <= nota1 && nota4 <= nota2 && nota4 <= nota5){
            notafinal = nota2 + nota1 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota2 <= nota1 && nota2 <= nota4 && nota2 <= nota5){
            notafinal = nota1 + nota4 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota1 <= nota2 && nota1 <= nota4 && nota1 <= nota5){
            notafinal = nota1 + nota4 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }

    }
    else if (nota4 >= nota2 && nota4 >= nota1 && nota4 >= nota3 && nota4 >= nota5){
        if(nota5 <= nota1 && nota5 <= nota2 && nota5 <= nota3){
            notafinal = nota2 + nota1 + nota3;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota3 <= nota1 && nota3 <= nota2 && nota3 <= nota5){
            notafinal = nota2 + nota1 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota2 <= nota1 && nota2 <= nota3 && nota2 <= nota5){
            notafinal = nota1 + nota3 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota1 <= nota2 && nota1 <= nota3 && nota2 <= nota5){
            notafinal = nota2 + nota3 + nota5;
            printf("%.1lf\n", notafinal);
            return 0;
        }

    }
    else if (nota5 >= nota2 && nota5 >= nota1 && nota5 >= nota3 && nota5 >= nota4){
        if(nota4 <= nota1 && nota4 <= nota2 && nota4 <= nota3){
            notafinal = nota2 + nota1 + nota3;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota3 <= nota1 && nota3 <= nota2 && nota3 <= nota4){
            notafinal = nota2 + nota1 + nota3;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota2 <= nota1 && nota2 <= nota3 && nota2 <= nota4){
            notafinal = nota1 + nota3 + nota4;
            printf("%.1lf\n", notafinal);
            return 0;
        }
        if(nota1 <= nota2 && nota1 <= nota3 && nota1 <= nota4){
            notafinal = nota2 + nota3 + nota4;
            printf("%.1lf\n", notafinal);
            return 0;
        }

    }
    system("pause");
    return 0;
}


/*int main(){
    int quantidade_de_numeros = 5;

    float lista_de_inteiros[quantidade_de_numeros];
    scanf("%f %f %f %f %f", &lista_de_inteiros[0], &lista_de_inteiros[1], &lista_de_inteiros[2], &lista_de_inteiros[3], &lista_de_inteiros[4]);

    int ultimo_idx = (
        (sizeof(lista_de_inteiros) / sizeof(*lista_de_inteiros)) -1
    );

    bool alterado = true;
    while(alterado){
        alterado = false;
        for(int idx = 0; idx < ultimo_idx; ++idx){
            float &anterior = lista_de_inteiros[idx];
            float &proximo = lista_de_inteiros[idx + 1];
            if (anterior > proximo) {
                float aux = anterior;
                anterior = proximo;
                proximo = aux;
                alterado = true;
            }
        }
    }

    float menor_valor = lista_de_inteiros[0];
    float maior_valor = lista_de_inteiros[ultimo_idx];
    float soma_valores = 0;
    for(int idx = 1; idx < ultimo_idx; ++idx){
        soma_valores += lista_de_inteiros[idx];
    }

    // printf("menor %f \n", menor_valor);
    // printf("maior %f \n", maior_valor);
    printf("%.1f\n", soma_valores);

    // for(int idx = 0; idx <= ultimo_idx; ++idx){
    //     printf("idx %d: %f \n", idx, lista_de_inteiros[idx]);
    // }


    return 0;
}
*/
