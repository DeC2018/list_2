#include <stdio.h>
#include <stdlib.h>

typedef int Data;

typedef struct Node Node;
struct Node {
    Data data;
    Node * next;
};

void print(Node * list) {
    for (Node * p = list; p != NULL; p = p->next) {
        printf("%d ", p->data);
    }
    printf("\n");
}

void push(Node ** plist, Data d) {
    Node * p = malloc(sizeof(Node));
    p->data = d;
    p->next = *plist;
    *plist = p;
}

int main() {

    Data test[] = {10, 3, 17, 21};


    Node * list = NULL;
    print(list);
    for(int i = sizeof(test)/sizeof(test[0]) - 1; i >= 0; i--) {
        push(&list, test[i]);
        print(list);
    }


    return 0;
}