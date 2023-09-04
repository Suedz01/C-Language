#include <stdio.h>

void retirarLinha(char *str1){
    while( *str1 != '\n' ){
        str1++;
    }
    if( *str1 == '\n' ) *str1 = '\0';
}
int lengthString( const char *str1 ){
    int length = 0;
    while( *str1 ){
        length++;
        str1++;
    }
    return length;
}

int main() {
    char str1[81];
    int length, i;

    // Leitura da string
    printf("Digite uma string (até 80 caracteres): ");
    fgets(str1, sizeof(str1), stdin);
    retirarLinha(str1);
    length = lengthString(str1);

    // Invertendo a string no próprio vetor.
    //Método SWAP, troca-se a última casa pela primeira, até chegar no meio da string
    for (i = 0; i < length / 2; i++) {
    char temp = str1[i];
    str1[i] = str1[length - 1 - i];
    str1[length - 1 - i] = temp;
    }
    
    // Imprimindo a string invertida
    printf("String Invertida: %s\n", str1);
    return 0;
}
