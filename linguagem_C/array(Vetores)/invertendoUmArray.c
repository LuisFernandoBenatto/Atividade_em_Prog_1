#include <stdio.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
  int numeros[10];
  int i;
  for(i=0; i < 10; i++) {
    scanf("%d", &numeros[i]);
  }
  for(i = 9; i >= 0; i--) {
    printf("%d ",numeros[i]);
  }
  return 0;
}
