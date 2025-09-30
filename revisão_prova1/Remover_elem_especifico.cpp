#include<stdio.h>
/*Quest�o 3 - Remover Elemento Espec�fico

Implemente uma lista encadeada que permita remover a primeira ocorr�ncia de um valor X.
Ap�s a remo��o, imprima os elementos da lista.

Entrada
A primeira linha cont�m N, o n�mero de elementos.
A segunda linha cont�m os N elementos.
A terceira linha cont�m o valor X a ser removido.

Sa�da
Lista resultante ap�s a remo��o de X.
Caso X n�o exista, imprima a lista original.

Exemplo de Entrada:
6
1 2 3 4 5 6
4

Sa�da:
1 2 3 5 6*/


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
        Node *aux = start;
        while (aux != NULL) {
            printf("%d ", aux->value);
            aux = aux->next;
        }
        printf("\n");
    }

    void removeValue(int x) {
        if (empty()) return;


        if (x == start->value) {
            Node *aux = start;
            start = start->next;
            delete aux;
            return;
        }

        Node *aux = start;
        while (aux->next != NULL && aux->next->value != x){
            aux = aux->next;
        }

        if(aux->next != NULL){
        Node* toDel = aux->next;
        aux->next = aux->next->next;
        delete toDel;
        }

    }


};

int main() {

    int n,x,rem;

    scanf("%d", &n);

    List l;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        l.pushBack(x);
    }

    scanf("%d", &rem);
    l.removeValue(rem);

    l.print();

    return 0;
}
