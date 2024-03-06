#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node
{
    int data;
    struct node *next;
};

Node *createNode(int data)
{
    // Allcatae memory for new node
    Node *node = (Node *)malloc(sizeof(Node));

    node->data = data;
    node->next = NULL;
    return node;
}

void priinList(Node *head)
{
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
    puts("");
}

int main(int argc, char const *argv[])
{
    // Node *n1 = (Node *)malloc(sizeof(Node));
    // Node *n2 = (Node *)malloc(sizeof(Node));
    // Node *n3 = (Node *)malloc(sizeof(Node));
    Node *n1 = createNode(1);
    Node *n2 = createNode(2);
    Node *n3 = createNode(3);

    // Assign data to nodes
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;

    // Link the nodes together
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    // Print
    priinList(n1);

    return 0;
}
