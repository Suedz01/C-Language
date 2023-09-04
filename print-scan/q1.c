#include <stdio.h>
int main(){
    int a,b,c;

    printf( "Insira o valor A: " );
    scanf( "%d", &a );

    printf( "\nInsira o valor B: " );
    scanf( "%d", &b );

    printf( "\nInsira o valor C: " );
    scanf( "%d", &c );

    //Soma entre os números
    printf( "\n\nA soma entre os três números eh: %d ", a+b+c);

    //Produto entre os números
    printf( "\nO produto entre os três números eh: %d ", a*b*c);
    
    return 0;
}