#include <stdio.h>

// Função que compara duas strings e retorna um valor negativo, zero ou positivo,
// dependendo se s1 é lexicograficamente menor, igual ou maior que s2
int ordemAlfa(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

// Função para copiar o conteúdo da string 'src' para 'dest'
void copiaString(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

// Função para concatenar a string 'src' ao final da string 'dest'
void concaString(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    copiaString(dest, src);
}

// Função para retira '\n'
void retirarLinha(char *str1){
    while( *str1 != '\n' ){
        str1++;
    }
    if( *str1 == '\n' ) *str1 = '\0';
}

int main() {
    char str1[81], str2[81], str3[81], temp[81];
    char concatenated[240] = "";

    // Recebe as três strings
    printf("Insira a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    retirarLinha(str1);

    printf("Insira a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    retirarLinha(str2);

    printf("Insira a terceira string: ");
    fgets(str3, sizeof(str3), stdin);
    retirarLinha(str3);

    // Ordenação das strings em ordem lexicográfica usando a função 'ordemAlfa'
    if (ordemAlfa(str1, str2) > 0) {
        copiaString(temp, str1);
        copiaString(str1, str2);
        copiaString(str2, temp);
    }
    if (ordemAlfa(str2, str3) > 0) {
        copiaString(temp, str2);
        copiaString(str2, str3);
        copiaString(str3, temp);
    }
    if (ordemAlfa(str1, str2) > 0) {
        copiaString(temp, str1);
        copiaString(str1, str2);
        copiaString(str2, temp);
    }
    // Concatenação das três strings em ordem alfabética
    concaString(concatenated, str1);
    concaString(concatenated, str2);
    concaString(concatenated, str3);

    // Exibe a string resultante
    printf("\nStrings concatenadas em ordem alfabética:\n%s", concatenated);

    return 0;
}