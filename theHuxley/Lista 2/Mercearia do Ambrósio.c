#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int codigo, quantidade;
    double c, d, e, f, g, h, i, j;

    scanf("%d",&codigo);
    scanf("%d",&quantidade);

    c = (quantidade*5.30);
    d = c-(c*0.15);
    e = (quantidade*6.00);
    f = (e-(e*0.15));
    g = (quantidade*3.20);
    h = (g-(g*0.15));
    i = (quantidade*2.50);
    j = (i-(i*0.15));

    if( codigo == 1 && quantidade < 8){
       printf("R$ %.2f\n", c);
    }
    else if(codigo == 1&&quantidade >= 8){
        printf("R$ %.2f\n", d);
    }
    else if( codigo == 2 && quantidade < 7){
        printf("R$ %.2f\n", e);
    }
    else if( codigo == 2 && quantidade >= 7 ){
        printf("R$ %.2f\n", f);
    }
    else if( codigo == 3 && quantidade < 13 ){
        printf("R$ %.2f\n", g);
    }
    else if( codigo == 3 && quantidade >= 13 ){
        printf("R$ %.2f\n", h);
    }
    else if( codigo == 4 && quantidade < 15 ){
        printf("R$ %.2f\n", i);
    }
    else if( codigo == 4 && quantidade >= 15 ){
        printf("R$ %.2f\n", j);
    }
    system("pause");
	return 0;
}


