#include <stdio.h>

int main(){
    float var;
    int m,n,k = 0; //Definindo os parametros da matriz

    do{
        printf("Digite m e n:\n");
        scanf("%d %d", &m, &n);
    }while( m <= 0 && n >= 100 );

    float A[m][n];
    float ref[m*n];

    for( int i = 0; i < m; i++ ){ // Preenchendo a matriz
        for( int j = 0; j < n; j++ ){
            printf("A[%d][%d]: ", i+1,j+1);
            scanf("%f",&var);
            A[i][j] = var;
        }
    }

    printf("\nMatriz resultante:\n");
    for( int i = 0; i < m; i++ ){ // Lendo a matriz criada
        for( int j = 0; j < n; j++ ){
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
    for( int i = 0; i < m; i++ ){ // Passando a matriz para um vetor
        for( int j = 0; j < n; j++ ){
            ref[k] = A[i][j];
            k++;
        }
    }

    k=0;
    printf("\nVetor transposto: "); // Matriz transformada em um único vetor
    for( int i = 0; i < m*n; i++ ){
        printf("%f ", ref[i]);
    }
    //
    for( int i = 0; i < m * n; i++ ){ // calculando frequências do vetor/matriz
        int freq = 0;
        for( int j = 0; j < m * n; j++ ){
            // realizar varredura nas outras casas
            if( ref[i] == ref[j] ){
                freq++;
            }
        }
        if( freq == 2 ){
            var = 1;
            break;
        }else{
            var = 0;
        }
    }

    if(var){
        printf("\nHá valores repetidos!");
    }else{
        printf("\nNão há valores repetidos!");
    }
    return 0;
}