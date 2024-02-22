#include <stdio.h>
#include <stdlib.h>

struct __Node
{
    int data;
    struct __Node *next;
    /* data */
};

typedef struct __Node Node;
typedef Node *List;

void insert(List *list, int value);
void print(List list);
void printR(List list);
void delete(List *list, int value);

int main(int argc, char const *argv[])
{
    List head = NULL;
    insert(&head, 10);
    insert(&head, 12);
    insert(&head, 34);
    print(head);
    puts("");
    printR(head);
    delete (&head, 10);
    puts("");
    print(head);
    return 0;
}

void insert(List *list, int value)
{
    List newNode = (List)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*list == NULL)
    {
        *list = newNode;
        return;
    }

    List current = *list;
    List prev = NULL;

    while (current != NULL)
    {
        prev = current;
        current = current->next;
    }
    prev->next = newNode;
}

void print(List list)
{
    List current = list;

    while (current != NULL)
    {
        printf("[%d] ->", current->data);
        current = current->next;
    }
}

void printR(List list)
{
    if (list == NULL)
    {
        return;
    }
    printf("[%d] ->", list->data);
    printR(list->next);
}

void delete(List *list, int value)
{
    List current = *list;
    List prev = NULL;

    while (current != NULL)
    {
        if (current->data == value)
            break;
        prev = current;
        current = current->next;
    }

    if (current == NULL)
        return; // value not found

    if (prev == NULL)
    {
        *list = current->next;
    }
    else
    {
        prev->next = current->next;
    }

    free(current);
}