#include <stdio.h>
int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    // MATRIZ A - PREENCHER
    printf("Digite os elementos da matriz A:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    // MATRIZ B - PREENCHER
    printf("Digite os elementos da matriz B:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

    // MATRIZ A/B - MULTIPLICAÇÃO
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // MATRIZ C - RESULTANTE
    printf("Matriz C resultante da multiplicação de A e B:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}