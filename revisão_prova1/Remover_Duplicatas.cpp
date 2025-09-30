#include<stdio.h>
/*Questão 7 - Inverter a Lista

Dada uma lista encadeada, imprima os elementos na ordem inversa.

Entrada
Um inteiro N.
Em seguida, N elementos.

Saída
Elementos na ordem inversa.

Exemplo de Entrada:
4
10 20 30 40

Saída:
40 30 20 10*/


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

    void remDuplicata(){
        Node *current = start;
        while(current != NULL){
            Node *runner = current;
            while(runner->next != NULL){
                if(runner->next->value == current->value){
                    Node *temp = runner->next;
                    runner->next = runner->next->next;
                    delete temp;
                } else{
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }

    void print() {
        Node *aux = start;
        while (aux != NULL) {
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

    l.remDuplicata();
    l.print();


    return 0;
}
