#include <stdio.h>

int main(){
    int x,y,z;

    printf( "Insira o valor X: " );
    scanf( "%d", &x );

    printf( "\nInsira o valor Y: " );
    scanf( "%d", &y );

    z = x;
    x = y;
    y = z;

    printf( "\n\nValor X: %d", x );
    printf( "\nValor Y: %d", y );

    return 0;
}