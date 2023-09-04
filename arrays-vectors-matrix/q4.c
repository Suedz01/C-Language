#include <stdio.h>
int main(){
    int resultado = 0;
    int n, m;
    int var;

    do{
        printf("Insira os valores de n e m: ");
        scanf("%d %d", &n, &m);
    }while( n >= m );
    int v1[n];

    printf("\nPreenchendo o v1: ");
    for( int i = 0; i < n; i++ ){
        scanf("%d", &var);
        v1[i] = var;
    }
    int v2[m];

    printf("\nPreenchendo o v2: ");
    for( int i = 0; i < m; i++ ){
        scanf("%d", &var);
        v2[i] = var;
    }
    
    for(int i = 0; i <= m - n; i++) {
        int j;
        for(j = 0; j < n; j++) {
            if(v2[i + j] != v1[j]) {
                break;
            }
        }
        if(j == n) {
            resultado++;
        }
    }
    printf("\nResultado = %d", resultado);

    return 0;
}
