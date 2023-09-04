#include <stdio.h>
int main(){
    int maiorValorPos, maiorValor = 0;
    int n = 10, var;
    int v[n];

    printf("Preencha o vetor a seguir: ");

    for(int i = 0; i < n; i++) {
        printf("\nVetor [%d]: ", i);
        scanf("%d",&var);

        if( var > maiorValor ){
            maiorValorPos = i;
            maiorValor = var;
        }
        
        v[i] = var; // Incrementa cada elemento por 1
    }

    printf("\nVetor preenchido com sucesso!");

    printf("\nA posição do maior número do vetor é %d", maiorValorPos);
    getchar();

    return 0;
}
