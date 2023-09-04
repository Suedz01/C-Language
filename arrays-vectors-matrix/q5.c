#include <stdio.h>

int main(){
    int n, m, var;

    printf("Qual o tamanho do vetor? ");
    scanf("%d",&n);

    int v1[n];
    int v2[n];
    m = 2 * n;
    int v3[m];

    printf("\nVetor 1:"); //Preenchendo vetor 1
    for( int i = 0; i < n; i++){
        printf("\nv1[%d]: ", i);
        scanf("%d",&var);
        v1[i] = var;
    }

    printf("\nVetor 2:"); //Preenchendo vetor 2
    for( int i = 0; i < n; i++){
        printf("\nv2[%d]: ", i);
        scanf("%d",&var);
        v2[i] = var;
    }

    printf("\nVetor 3:\n"); //Preenchendo o vetor resposta
    for( int i = 0; i < n; i++){
        int j = i * 2;
        if( v1[i] <= v2[i] ){
            v3[j] = v1[i];
            v3[j+1] = v2[i];
        }
        else{
            v3[j] = v2[i];
            v3[j+1] = v1[i];
        }
    }

    for( int i = 0; i < m; i++ ){ //Lendo o vetor resultante
        printf("%d ", v3[i]);
    }

    return 0;
}
