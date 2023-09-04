#include <stdio.h>

int ordermAlfa(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    if (!*str1 && !*str2) return 0; // Se ambos chegarem ao fim, são iguais
    if (*str1 > *str2) return 1; // Se str1 é lexicograficamente maior
    return -1; // Se str2 é lexicograficamente maior
}

int main() {

    /*
    Lógica:
    Descobriar a lexografia das strings
    e se uma é maior que a outra, ou semelhantes.
    Caso str1 for maior = 1
    Caso str2 for maior = -1
    Caso for equivalente = 0
    */

    char str1[81], str2[81];
    int result;

    //Inicialização das variáveis
    printf("Preencha a str1:\n");
    fgets(str1, sizeof(str1), stdin);

    printf("Preencha a str2:\n");
    fgets(str2, sizeof(str2), stdin);

    printf("%d", ordermAlfa( str1, str2 ) );

    return 0;
}
