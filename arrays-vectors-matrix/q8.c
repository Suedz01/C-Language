#include <stdio.h>
int main(){
    int A[4][4];
    int T[4][4];
    int var;

    printf("\nPreenchendo a matriz:\n");
    for( int i = 0; i < 4; i++ ){ // Preenchendo a matriz
        for( int j = 0; j < 4; j++ ){
            printf("A[%d][%d]: ", i+1,j+1);
            scanf("%d",&var);
            A[i][j] = var;
        }
    }

    printf("\nMatriz preenchida:\n");
    for( int i = 0; i < 4; i++ ){ // Lendo a matriz criada
        for( int j = 0; j < 4; j++ ){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for( int i = 0; i < 4; i++ ){ // Preenchendo a matriz transposta
        for( int j = 0; j < 4; j++ ){
            T[j][i] = A[i][j];
        }
    }

    printf("\nMatriz Transposta:\n");
    for( int i = 0; i < 4; i++ ){ // Lendo a matriz criada
        for( int j = 0; j < 4; j++ ){
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}