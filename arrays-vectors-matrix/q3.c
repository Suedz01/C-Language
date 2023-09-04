#include <stdio.h>
int main(){
    int n = 10;
    int ref, var1 = 0, var2, var;
    int v[n];

    printf("\nPreenchendo o vetor[]: ");
    for( int i = 0; i < n; i++ ){
        scanf("%d", &var);
        v[i] = var;
    }

    //valor ref
    printf("Insira um valor inteiro referência: ");
    scanf("%d",&ref);

    //Lendo o vetor
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n ; j++){
            if( i != j ){
                if( v[i] * v[j] == ref ){
                    var1 = v[i];
                    var2 = v[j];
                }
            }
        }
    }

    if( var1 == 0 ){
        printf("Não achamos uma combinação correta!");
    }
    else{
        printf("Achamos a combinação correta!\n %d * %d = %d", var1, var2, ref);
    }
    
    return 0;
}
