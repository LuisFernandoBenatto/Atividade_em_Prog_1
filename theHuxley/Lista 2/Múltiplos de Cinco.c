#include <stdio.h>

int main(){

    int n, m, i = 5;

    scanf("%d", &n);
    scanf("%d", &m);
    do
{
    i = i + 5;
    printf("%d|",i - 5);
}
    while (i >= n && i <= m);

	return 0;
}
