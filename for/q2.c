#include <stdio.h>
int main(){
    int n, soma = 0;
    printf("Insira um número: ");
    scanf("%d", &n);

    //leitura do numero escolhido
    printf("\nO número escolhido foi: %d", n);

    //leitura de 1 até n números
    for(int i = 1; i <= n; i++){
        printf("\n%d", i);
        soma += i;
    }

    //leitura da soma dos número de 1 até n
    printf("\n");
    printf("\nA soma dos numeros foi de: %d", soma);

    return 0;
}