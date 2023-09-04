#include <stdio.h>
int main(){
    int n, soma = 1;

    printf("Insira um número: ");
    scanf("%d", &n);
    
    //leitura de fatoriais n!
    printf("\nLeitura do fatorial %d!: ", n);
    if(n == 0) printf("\n1");
    else{
        for(int i = 1; i <= n; i++){
            soma *= i;
        }
        printf("\n%d", soma);
    }
    return 0;
}
