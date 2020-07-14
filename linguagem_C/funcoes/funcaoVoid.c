#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void loop_count( int i ){
    printf( "Em loop_count, i = " );
    while( i < 10 )
    printf ( "%d ", i++);
}
int main( ) {
    int i = 2;
    loop_count( i );
    printf( "\nEm main, i = %d.\n", i );
}
