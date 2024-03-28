#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *head = NULL;

    if (list1 == NULL && list2 == NULL)
    {
        return NULL;
    }

    if (list1 == NULL)
    {
        return list2;
    }

    if (list2 == NULL)
    {
        return list1;
    }

    //  find the head that has the smallest value
    if (list1->val < list2->val)
    {
        head = list1;
        list1 = list1->next;
    }
    else
    {
        head = list2;
        list2 = list2->next;
    }

    ListNode *current = head;

    while (list1 != NULL || list2 != NULL)
    {
        if (list1 == NULL)
        {
            current->next = list2;
            break;
        }
        else if (list2 == NULL)
        {
            current->next = list1;
            break;
        }
        

        if (list1->val < list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    return head;
}

int main(int argc, char const *argv[])
{
    int i, size = 3, val;
    ListNode **list1 = (ListNode**)malloc(sizeof(ListNode*) * size);
    ListNode **list2 = (ListNode **)malloc(sizeof(ListNode *) * size);

    for ( i = 0; i < size; i++)
    {
        scanf("%d", &val);
        list1[i] = (ListNode *)malloc(sizeof(ListNode));
        list1[i]->val = val;
        list1[i]->next = NULL;
        if (i > 0)
        {
            list1[i - 1]->next = list1[i];
        }
    }

    for ( i = 0; i < size; i++)
    {
        scanf("%d", &val);
        list2[i] = (ListNode *)malloc(sizeof(ListNode));
        list2[i]->val = val;
        list2[i]->next = NULL;
        if (i > 0)
        {
            list2[i - 1]->next = list2[i];
        }
    }

    ListNode *temp = list1[0];
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    puts("");

    temp = list2[0];

    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    puts("");

    ListNode *head = mergeTwoLists(list1[0], list2[0]);

    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }

    return 0;
}
