#include <stdio.h>
int main(){
    int n, soma = 1;
    
    printf("Insira um número: ");
    scanf("%d", &n);

    //leitura do numero escolhido
    printf("\nO número escolhido foi: %d", n);

    //leitura das potencias de 2^0 ate 2^n
    printf("\nLeitura das potencias: ");
    for(int i = 0; i <= n; i++){
        if(i == 0) printf("\n1");
        else{
            soma *= 2;
            printf("\n%d", soma);
        }
    }
    return 0;
}