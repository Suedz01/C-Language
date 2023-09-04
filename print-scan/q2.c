#include <stdio.h>
int main(){
    int a;

    printf( "Insira o valor A: " );
    scanf( "%d", &a );

    //Número escolhido
    printf( "\n\nO número escolhido foi: %d ", a);

    //Quadrado do número escolhido
    printf( "\nO quadrado do número eh: %d ", a*a);

    //Cubo do número escolhido
    printf( "\nO cubo do número eh: %d ", a*a*a);

    return 0;
}
