#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} Node;

int main(int argc, char const *argv[])
{
    Node dummy, *head, *new_node, *tmp;

    head = &dummy;
    head->data = 1;
    head->prev = head->next = head;

    new_node = (Node *)malloc(sizeof(Node)); //
    new_node->data = 2;
    new_node->prev = head->next;              //
    new_node->next = head;                    //
    head->prev = head->prev->next = new_node; //

    new_node = (Node *)malloc(sizeof(Node)); //
    new_node->data = 3;
    new_node->prev = head->next;              //
    new_node->next = head;                    //
    head->prev = head->prev->next = new_node; //

    printf("head = %p\n", head);
    for (tmp = head;; tmp = tmp->next)
    {
        printf("data: %d\n", tmp->data);
        printf("curr: %p\n", tmp);
        printf("prev: %p\n", tmp->prev);
        printf("next: %p\n", tmp->next);

        if (tmp == head->prev)
        {
            break;
        }
        puts("-----");
    }

    return 0;
}
