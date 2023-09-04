#include <stdio.h>

    int main() {

    int n, i, soma = 0;

    // Lendo o valor de n
    printf("Digite um número: ");
    scanf("%d", &n);

    // Calculando a soma dos números inteiros de 1 até n
    for (i = 1; i <= n; i++) {
        soma += i;
    }

    // Imprimindo o resultado
    printf("A soma dos inteiros de 1 até %d é: %d\n", n, soma);

    return 0;
}