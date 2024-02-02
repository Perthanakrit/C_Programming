#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Node;

void insert_node(Node *head, Node *n)
{
    Node *search;

    for (search = head->next; search != head && search->data < n->data; search = search->next)
        ;

    n->next = search;
    n->prev = search->prev;
    search->prev->next = n;
    search->prev = n;
}

int main(int argc, char const *argv[])
{
    Node *head = (Node *)malloc(sizeof(Node));
    head->prev = head->next = head;

    return 0;
}
