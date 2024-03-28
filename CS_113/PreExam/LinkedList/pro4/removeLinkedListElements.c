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

struct ListNode *removeElements(struct ListNode *head, int val){
    struct ListNode *temp = head;
    struct ListNode *prev = NULL;

    while (temp != NULL)
    {
        if (temp->val == val)
        {
            // if the value is at the head
            if (temp == head)
            {
                head = head->next;
                free(temp);
                temp = head;
            }
            else
            {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
};

void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
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
    printList(removeElements(head, 6));

    return 0;
}
