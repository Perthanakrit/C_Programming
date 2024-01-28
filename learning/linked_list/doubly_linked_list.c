#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

void insert_list(Node **head_ref, int input)
{
    Node *n;
    n = (Node *)malloc(sizeof(Node));

    n->data = input;
    n->prev = n->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = n;
    }
    else
    {
        n->next = *head_ref;
    }

    (*head_ref)->prev = n;

    *head_ref = n;
}

void print_link_list(Node *head)
{
    Node *temp;

    temp = head;

    while (temp)
    {
        printf("data: %d\n", temp->data);
        // printf("( %p )\n", temp);
        printf("prev: %p\n", temp->prev);
        printf("next: %p\n", temp->next);

        temp = temp->next;
        puts("-----");
    }
}

void delete_list(Node **head_ref, int input)
{
    Node *temp;

    temp = *head_ref;

    while (temp)
    {
        if (temp->data == input)
        {
            if (temp->prev == NULL)
            {
                *head_ref = temp->next;
            }
            else
            {
                temp->prev->next = temp->next;
            }

            if (temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }

            free(temp);
            break;
        }

        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head;

    head = NULL;

    insert_list(&head, 1);
    insert_list(&head, 2);
    insert_list(&head, 3);

    delete_list(&head, 1);

    print_link_list(head);

    return 0;
}
