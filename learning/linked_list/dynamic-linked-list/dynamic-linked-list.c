#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *createNode(int data)
{
    // Allcatae memory for new node
    Node *node = (Node *)malloc(sizeof(Node));

    node->data = data;
    node->next = NULL;

    return node;
}

void appendNode(Node **head, int data)
{
    // Step1 : Create new node
    Node *newNode = createNode(data);

    // Step 2: Append node

    // Case 1: list is empty
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    // Case 2: list is not empty
    Node *last = *head;

    while (last->next != NULL)
    {
        last = last->next;
        return;
    }

    last->next = newNode;
}

void deleteNode(Node **head, int data)
{
    Node *prev = NULL;
    Node *target = *head;

    while (target != NULL)
    {
        if (target != NULL)
        {
            if (target->data == data)
            {
                break;
            }
        }
        prev = target;
        target = target->next;
    }

    // Step2: Check th node exists
    if (target == NULL)
    {
        return;
    }

    // Step3: Delet the nodes

    // Case 1: Delete the first node
    if (target == *head)
    {
        *head = target->next;
        free(target);
        return;
    }

    // Case 2: Detele the last or middle node
    prev->next = target->next;
    free(target);
}

void priinList(Node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
    puts("");
}

int main(int argc, char const *argv[])
{
    Node *list = NULL;

    // Append three nodes
    appendNode(&list, 1);
    appendNode(&list, 2);
    appendNode(&list, 3);

    priinList(list);

    return 0;
}
