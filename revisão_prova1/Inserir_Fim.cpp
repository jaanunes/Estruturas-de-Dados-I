#include<stdio.h>

/*Questão 1 - Inserindo no Final

Implemente uma lista encadeada simples que permita inserir números inteiros no final da lista.
Após todas as inserções, imprima os elementos da lista em ordem.

Entrada
A primeira linha contém um inteiro N, o número de elementos.
A segunda linha contém N inteiros a serem inseridos.

Saída
Os elementos da lista impressos em ordem, separados por espaço.
Exemplo de Entrada:
5
10 20 30 40 50
Saída:
10 20 30 40 50*/


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

    void pushBack(int value) {

        Node *n = new Node(value);
        c++;

        if (empty()) {
            start = n;
            end = n;
            return;
        }

        end->next = n;
        end = n;

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
        l.pushBack(x);
    }

    l.print();

    return 0;
}
