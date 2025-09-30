#include<stdio.h>
/*Questão 6 - Contar Ocorrências

Implemente uma lista encadeada que conte quantas vezes um valor X aparece.

Entrada
Um inteiro N.
Em seguida, N números.
Por fim, o número X.

Saída
Um inteiro representando a quantidade de ocorrências.

Exemplo de Entrada:
7
1 3 2 3 4 3 5
3

Saída:
3*/


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

    int countOccor(int x){
        int count = 0;
        Node *aux = start;
        while(aux != NULL){
            if(aux->value == x){
                count++;
            }
            aux = aux->next;
        }
        return count;
    }
};

int main() {

    int n,x, repet;

    scanf("%d", &n);

    List l;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        l.pushBack(x);
    }

    scanf("%d", &repet);

    printf("%d \n", l.countOccor(repet));

    return 0;
}
