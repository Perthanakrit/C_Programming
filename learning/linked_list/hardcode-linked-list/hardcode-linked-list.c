#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

int main()
{
    // Create nodes
    Node n1, n2, n3;

    // Assign data to nodes
    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    // Link the nodes together
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    // Print hte linked list
    for (Node *head = &n1; head != NULL; head = head->next)
    {
        printf("%d\n", head->data);
    }
}