#include <stdio.h>
#include <stdlib.h>

int main(){

    int var = 10;
    int *ptr;
    
    ptr = &var; 
    
    printf("Valor da variavel: %d\n", var);
    printf("Endereço da variavel: %d\n", &var);  
    printf("Valor do ponteiro: %d\n", ptr);
    printf("Valor do apontamento: %d\n", *ptr);
    printf("Endereço do ponteiro: %d\n", &ptr);   

    return 0;
}

