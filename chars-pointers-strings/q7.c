#include <stdio.h>

// Função para retira '\n'.
void retirarLinha(char *str1){
    while( *str1 != '\n' ){
        str1++;
    }
    if( *str1 == '\n' ) *str1 = '\0';
}

int main() {

    /*
    Lógica:
    Percorra cada caractere da string T.
    Para cada caractere, tente comparar a string p a partir dessa posição em T.
    Se todos os caracteres em p coincidirem com os caracteres correspondentes em T, imprima a posição atual de T.
    */

    char T[50]; // A string maior.
    char p[25]; // A string que estamos tentando encontrar em T.
    int i, j, var;

    printf("Digite a string T: ");
    fgets(T, sizeof(T), stdin);
    retirarLinha(T);

    printf("Digite a string p: ");
    fgets(p, sizeof(p), stdin);
    retirarLinha(p);

    for (i = 0; T[i] != '\0'; i++) {
        var = 1; // Supomos que encontramos até provar o contrário.
        for (j = 0; p[j] != '\0'; j++) {
            if (T[i + j] != p[j]) {
                var = 0; // Não encontramos.
                break;
            }
        }
        if (var) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
