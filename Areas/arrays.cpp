#include<stdio.h> // header files  
#include<conio.h>  
int main()  
{   // initialize the local variables.  
    int j = 1;
    
    int a[] = {0,1,4};
    int b[3]={};
    int c[3];
    
    //Leitura de Vetores
    printf("Vetor: A\n");
    for(int i = 0; i <= 2; i++)
    {
        printf("Casa: %d   ", a[i]);
    }
    
    printf("\n\n");
    //Preenchimento de Vetores & Overwriting
    for(int i = 0; i <= 2; i++)
    {
        printf("Casa: %d -> ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i <= 2; i++)
    {
        printf("Casa: %d   ", a[i]);
    }
    
    return 0;
}   