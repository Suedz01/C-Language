#include <stdio.h>

void SpaceString(char *str) {
    int writeIndex = 0; // Índice para onde o caractere será escrito
    int readIndex = 0; // Índice para onde estamos lendo
    int spaceCount = 0; // Contagem de espaços consecutivos

    while (str[readIndex] != '\0') {
        if (str[readIndex] == ' ') {
            spaceCount++;
        if (spaceCount == 1) { // Se for o primeiro espaço, escreva-o
            str[writeIndex++] = ' ';
        }
        } else {
            spaceCount = 0; // Reset na contagem de espaços
            str[writeIndex++] = str[readIndex];
        }
        readIndex++; // Move para o próximo caractere para ler
    }
    str[writeIndex] = '\0'; // Termina a string corretamente
}

int main(){

    /*
    Logica -
    Limpar os espaços desnecessários em uma string.
    Caso houver 2 ou mais espacos, reduzi-los a apenas um espaco.
    */

    char str1[81];
    char str2[81];

    //Inicialização das variáveis
    printf("Preencha a str1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Preencha a str2: ");
    fgets(str2, sizeof(str2), stdin);

    //Varredura da string
    SpaceString(str1);
    printf("String final, limpa:\n");
    printf("%s", str1);

    return 0;
}