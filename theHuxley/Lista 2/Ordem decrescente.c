#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// achar o erro

int main(){
    int x, y, z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    if (x >= y && x >= z && y >= z ){
        printf("%d\n",x);
        printf("%d\n",y);
        printf("%d\n",z);
    }
    else if (x >= y && x >= z && z >= y){
        printf("%d\n",x);
        printf("%d\n",z);
        printf("%d\n",y);
    }
    else if (y >= z && y >= x && z >= x){
        printf("%d\n",y);
        printf("%d\n",z);
        printf("%d\n",x);
    }
    else if (y >= z && y >= x && x >= z){
        printf("%d\n",y);
        printf("%d\n",x);
        printf("%d\n",z);
    }
    else if (z >= y && z >= x && y >= x){
        printf("%d\n",z);
        printf("%d\n",y);
        printf("%d\n",x);
    }
     else if (z >= y && z >= x && x >= y){
        printf("%d\n",z);
        printf("%d\n",x);
        printf("%d\n",y);
    }
    system("pause");
	return 0;
}
