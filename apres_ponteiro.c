#include <stdio.h>
#include <stdlib.h>

int main(){

    int var = 10;
    int *ptr;
    
    ptr = &var; 
    
    printf("Valor da variavel: %d\n", var);
    printf("Endere�o da variavel: %d\n", &var);  
    printf("Valor do ponteiro: %d\n", ptr);
    printf("Valor do apontamento: %d\n", *ptr);
    printf("Endere�o do ponteiro: %d\n", &ptr);   

    return 0;
}

