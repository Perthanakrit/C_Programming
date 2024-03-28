#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

ListNode *createNode(int val)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void addNode(ListNode **head, int val)
{
    ListNode *newNode = createNode(val);

    // if the list is empty
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    // if the list is not empty
    ListNode *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

// Write your code here
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    struct ListNode *result = (struct ListNode *)malloc(sizeof(struct ListNode));

    struct ListNode *temp = result;

    int carry = 0;
}

int main(int argc, char const *argv[])
{
    ListNode *head = NULL;
    int size, i, val;

    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &val);
        addNode(&head, val);
    }

    printList(head);
    puts("");
    printList(reverseList(head));

    return 0;
}
