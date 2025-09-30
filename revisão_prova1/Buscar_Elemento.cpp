#include<stdio.h>
/*Quest�o 5 - Buscar um Elemento

Implemente uma lista encadeada e verifique se um n�mero X est� presente nela.

Entrada
Um inteiro N.
Em seguida, N inteiros.
Por fim, o n�mero X.

Sa�da
"SIM" se X estiver na lista.
"NAO" caso contr�rio.

Exemplo de Entrada:
5
2 4 6 8 10
6

Sa�da:
SIM*/


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

    bool search(int x){
        Node *aux = start;
        while(aux != NULL){
            if(aux->value == x) return true;
            aux = aux->next;
        }
        return false;
    }
};

int main() {

    int n,x, busca;

    scanf("%d", &n);

    List l;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        l.pushBack(x);
    }

    scanf("%d", &busca);

    if(l.search(busca)){
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }

    return 0;
}
