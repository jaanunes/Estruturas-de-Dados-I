#include <stdio.h>

struct Pessoa {
    char nome [100];
    char endereco[100];

    void imprimir(){
        printf("Nome: %s\n", nome);
        printf("Endereço: %s\n", endereco);
    }
    void ler(){
        printf("Digite o nome: ");
        scanf("%[^\n]%*c", nome);
        printf("Digite o endereco: ");
        scanf("%[^\n]%*c", endereco);
    }


};


int main(){

    Pessoa p;
    p.ler();
    p.imprimir();


    return 0;
}
