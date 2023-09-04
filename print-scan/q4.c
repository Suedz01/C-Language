#include <stdio.h>

int main(){
    int x,y;

    printf( "Insira o valor X: " );
    scanf( "%d", &x );

    printf( "\nInsira o valor Y: " );
    scanf( "%d", &y );

    x = x + y;
    y = x - y; // Isso é igual a b = (a + b) - b, resultando em a.
    x = x - y; // Isso é igual a a = (a + b) - a, resultando em b.

    printf( "\n\nValor X: %d", x );
    printf( "\nValor Y: %d", y );
    
    return 0;
}