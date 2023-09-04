#include <stdio.h>

// Função para igualar todas as letras para que assim seja possível retirar a letra certa
void upToLowerCase( char *str1 ){
    while( *str1 ){
        if( *str1 >= 'A' && *str1 <= 'Z' ){
            *str1 += 32;
        }
        str1++;
    }
}

// Função para retira '\n'.
void retirarLinha(char *str1){
    while( *str1 != '\n' ){
        str1++;
    }
    if( *str1 == '\n' ) *str1 = '\0';
}

int testSubsequence(char* T1, char* T2) {
    int i = 0, j = 0;
    while (T1[i] != '\0' && T2[j] != '\0') {
        if (T1[i] == T2[j]) {
            i++; // Se os caracteres são iguais, avance no índice de T1.
        }
        j++; // Sempre avance no índice de T2.
    }
    // Se terminamos de percorrer T1, então T1 é uma subsequência de T2.
    return T1[i] == '\0';
}

int main() {
    char T1[50], T2[50];

    printf("Digite a string T1: ");
    fgets(T1, sizeof(T1), stdin);
    retirarLinha(T1);
    upToLowerCase(T1);

    printf("Digite a string T2: ");
    fgets(T2, sizeof(T2), stdin);
    retirarLinha(T2);
    upToLowerCase(T2);

    if ( testSubsequence(T1, T2) ) {
        printf("T1 é uma subsequência de T2.\n");
    } else {
        printf("T1 NÃO é uma subsequência de T2.\n");
    }

    return 0;
}