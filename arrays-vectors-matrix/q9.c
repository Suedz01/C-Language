#include <stdio.h>
int main(){
    //QUADRADO MÁGICO - MATRIZES
    int var, n;
    int ref;
    int resultado = 1;

    do{
        printf("Insira o valor n: ");
        scanf("%d",&n);
    }while(n <= 1 && n >= 100);

    int A[n][n];

    printf("\nPreenchendo a matriz:\n");
    for( int i = 0; i < n; i++ ){ // Preenchendo a matriz
        for( int j = 0; j < n; j++ ){
            printf("A[%d][%d]: ", i+1,j+1);
            scanf("%d",&var);
            A[i][j] = var;
        }
    }

    printf("\nMatriz preenchida:\n");
    for( int i = 0; i < n; i++ ){ // Lendo a matriz criada
        for( int j = 0; j < n; j++ ){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    //DEFININDO - REF
    for( int i = 0; i < 1; i++ ){
        var = 0;
        for( int j = 0; j < n; j++ ){
            var += A[i][j];
        }
        ref = var;
    }
    printf("\nA referência é de: %d", ref);

    //CONFIRMAÇÃO - LINHAS
    for( int i = 0; i < n; i++ ){
        var = 0;
        for( int j = 0; j < n; j++ ){
            var += A[i][j];
        }
        if( var != ref ){
            break;
        }
    }

    //CONFIRMAÇÃO - COLUNAS
    for( int i = 0; i < n; i++ ){
        var = 0;
        for( int j = 0; j < n; j++ ){
            var += A[j][i];
        }
        if( var != ref ){
            resultado = 0;
            break;
        }
    }

    //CONFIRMAÇÃO - DIAGONAL primaria
    for( int i = 0; i < 1; i++ ){
        var = 0;
        for( int j = 0; j < n; j++ ){
            var += A[j][j];
        }
        if( var != ref ){
            resultado = 0;
            break;
        }
    }

    //CONFIRMAÇÃO - DIAGONAL secundaria
    var = 0;
    for( int i = 0; i < n; i++ ){
        int j = n - i - 1;
        var += A[i][j];
    }

    if( var != ref ) resultado = 0;
    if( resultado ) printf("\nA matriz É um quadrado mágico.");
    else printf("\nA matriz NÃO é um quadrado mágico.");
    
    return 0;
}