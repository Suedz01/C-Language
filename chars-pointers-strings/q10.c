#include <stdio.h>

void retirarLinha(char *str1){
    while( *str1 != '\n' ){
        str1++;
    }
    if( *str1 == '\n' ) *str1 = '\0';
}

// Função para igualar todas as letras para que assim seja possível retirar a letra certa
void upToLowerCase( char *str1 ){
while( *str1 ){
    if( *str1 >= 'A' && *str1 <= 'Z' ){
        *str1 += 32;
    }
    str1++;
}
}

// Função para remover todos os espaços em branco de uma str1ing.
void removEspacos(char *str1) {
    int count = 0; // Conta os caracteres não espaço.
    for (int i = 0; str1[i]; i++) {
        if (str1[i] != ' ') {
            str1[count++] = str1[i];
        }
    }
    str1[count] = '\0';
}

// Função que retorna o tamanho da str1ing.
int lengthstr1ing(const char *str1) {
    int length = 0;
    while (*str1) {
        length++;
        str1++;
    }
    return length;
}

// Função que verifica se a str1ing é um palíndromo.
int checkPalindrome(const char *str1) {
    int length = lengthstr1ing(str1);
    for (int i = 0; i < length / 2; i++) {
        if (str1[i] != str1[length - 1 - i]) {
            return 0; // Não é um palíndromo.
        }
    }
    return 1; // É um palíndromo.
}

int main() {
    char str1[81];

    // Leitura da str1ing.
    printf("Digite uma str1ing (até 80 caracteres): ");
    fgets(str1, sizeof(str1), stdin);
    retirarLinha(str1);
    upToLowerCase(str1);

    // Remover todos os espaços da str1ing.
    removEspacos(str1);

    // Verificando se a str1ing é um palíndromo.
    if (checkPalindrome(str1)) {
        printf("A str1ing é um palíndromo.\n");
    } else {
        printf("A str1ing não é um palíndromo.\n");
    }

    return 0;
}