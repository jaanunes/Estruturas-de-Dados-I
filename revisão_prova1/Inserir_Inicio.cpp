#include<stdio.h>
/*Questão 2 - Inserindo no Início

Implemente uma lista encadeada simples que permita inserir números inteiros no início da lista.
Após todas as inserções, imprima os elementos.

Entrada
Um inteiro N indicando a quantidade de elementos.
Em seguida, N inteiros.

Saída
A lista resultante impressa em ordem.

Exemplo de Entrada:
4
5 7 9 11

Saída:
11 9 7 5*/


struct Node {

    int value;
    Node *next;

    Node(int _value) {
        value = _value;
        next = NULL;
    }

    Node() {
        next = NULL;
    }

};

struct List {

    Node *start;
    Node *end;
    int c;

    List() {
        start = NULL;
        end = NULL;
        c = 0;
    }

    bool empty() {
        return start == NULL;
    }

    void pushFront(int value) {

        Node *n = new Node(value);
        c++;

        if (empty()) {
            start = n;
            end = n;
            return;
        }

        n->next = start;
        start = n;

    }

    void print() {
        //printf("start: %d end: %d\n", start, end);
        Node *aux = start;
        while (aux != NULL) {
            //printf("[%d] %d [%d] -> ", aux, aux->value, aux->next);
            printf("%d ", aux->value);
            aux = aux->next;
        }
        printf("\n");
    }


};

int main() {

    int n,x;

    scanf("%d", &n);

    List l;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        l.pushFront(x);
    }

    l.print();

    return 0;
}
