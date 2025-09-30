#include<stdio.h>

/*Quest�o 1 - Inserindo no Final

Implemente uma lista encadeada simples que permita inserir n�meros inteiros no final da lista.
Ap�s todas as inser��es, imprima os elementos da lista em ordem.

Entrada
A primeira linha cont�m um inteiro N, o n�mero de elementos.
A segunda linha cont�m N inteiros a serem inseridos.

Sa�da
Os elementos da lista impressos em ordem, separados por espa�o.
Exemplo de Entrada:
5
10 20 30 40 50
Sa�da:
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
