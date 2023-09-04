#include <stdio.h>

// Função para retira '\n'.
void retirarLinha(char *str1){
    while( *str1 != '\n' ){
        str1++;
    }
    if( *str1 == '\n' ) *str1 = '\0';
}

char upToLowerCase( char str1 ){
    if( str1 >= 'A' && str1 <= 'Z' ) return str1 + 32;
    return str1;
}

void varrerString( char *str1 ){
    while( *str1 ){
        *str1 = upToLowerCase( *str1 );
        str1++;
    }
}

int main() {

    /*
    Lógica:
    Transformar uma string de chars que tenham letras maiusculas em minusculas
    Varredura da string verificando se
    os caracteres estão dentro da faixa de letra maisuculas ( 65/90 )
    aqueles que tiverem, some-se +32
    varrerString()
    upToLowerCase()
    Lista 4 5
    */

    char str1[81];

    // Recebe as três strings
    printf("Insira a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    retirarLinha(str1);

    printf("\nFrase antes do tratamento:\n");
    printf("%s", str1);

    varrerString(str1);

    printf("\n\nFrase depois do tratamento:\n");
    printf("%s", str1);
    
    return 0;
}
