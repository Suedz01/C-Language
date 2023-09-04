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

// Função para verificar se um caractere 'ch' está presente na string 'str'.
int char_exists(const char *str, char ch) {
    while (*str) {
        if (*str == ch) {
            return 1; // Verdadeiro
        }
        str++;
    }
    return 0; // Falso
}

// Função para remover os caracteres de 'str2' que estão presentes em 'str1'.
void removerChars(const char *str1, char *str2) {
    char *write_pos = str2; // Ponteiro para posição onde o próximo caractere será escrito
    while (*str2) {
        if (!char_exists(str1, *str2)) {
            *write_pos++ = *str2; // Copie o caractere se ele não estiver presente em str1
        }
        str2++;
    }
    *write_pos = '\0'; // Finalize a string resultante
}

int main() {

    /*
    Lógica:
    Para cada caractere da segunda string, verifique se ele existe na primeira string.
    Se existir, ele não deve ser copiado para a string resultante.
    Se não existir, copie-o para a string resultante.
    */

    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    upToLowerCase(string1);

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    upToLowerCase(string2);

    removerChars(string1, string2);

    printf("Resultado após remover caracteres: %s", string2);

    return 0;
}