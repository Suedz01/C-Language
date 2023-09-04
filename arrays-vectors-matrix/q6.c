#include <stdio.h>
int main(){
    int MFreqValue, mFreqValue;
    int MFreq = 0, mFreq = 1;
    int var;
    int m,n,k = 0; //Definindo os parametros da matriz

    do{
        printf("Digite m e n:\n");
        scanf("%d %d", &m, &n);
    }while( m <= 0 && n >= 100 );

    printf("Digite m e n:\n");
    scanf("%d %d", &m, &n);

    int A[m][n];
    int ref[m*n];

    for( int i = 0; i < m; i++ ){ // Preenchendo a matriz
        for( int j = 0; j < n; j++ ){
            printf("A[%d][%d]: ", i+1,j+1);
            scanf("%d",&var);
            A[i][j] = var;
        }
    }

    for( int i = 0; i < m; i++ ){ // Passando a matriz para um vetor
        for( int j = 0; j < n; j++ ){
            ref[k] = A[i][j];
            k++;
        }
    }

    k=0;
    printf("\nMatriz resultante:\n");
    for( int i = 0; i < m; i++ ){ // Lendo a matriz criada
        for( int j = 0; j < n; j++ ){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor transposto: "); // Matriz transformada em um único vetor
    for( int i = 0; i < m*n; i++ ){
        printf("%d ", ref[i]);
    }

    printf("\nMatriz resultante:\n");
    mFreqValue = ref[0]; //inicializando variaveis

    for( int i = 0; i < m * n; i++ ){ // calculando frequências do vetor/matriz
        int freq = 0;
        for( int j = 0; j < m * n; j++ ){
            // realizar varredura nas outras casas
            if( ref[i] == ref[j] ){
                freq++;
            }
        }
        if( freq > MFreq ){
            MFreqValue = ref[i];
            MFreq = freq;
        }
        if( freq < mFreq ){
            mFreqValue = ref[i];
            mFreq = freq;
        }
    }

    printf("\nA variável mais repetida foi %d\nA variável menos repetida foi %d", MFreqValue, mFreqValue);
    return 0;
}
