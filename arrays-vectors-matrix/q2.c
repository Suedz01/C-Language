#include <stdio.h>

int main(){
    int n = 10;
    float media = 0, var;
    float v[n];

    printf("Preencha o vetor a seguir: ");

    for(int i = 0; i < n; i++){
        printf("\nv[%d]: ", i);
        scanf("%f",&var);
        v[i] = var;
        media += v[i];
    }

    media = media / n;
    printf("\nA média entre os valores armazenados é: : %.2f", media);
    
    return 0;
}
