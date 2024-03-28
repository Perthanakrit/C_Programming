#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;

struct ListNode *deleteDuplicates(struct ListNode *head)
{
    ListNode *curr = head;
    ListNode *temp;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->val == curr->next->val)
        {
            temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
        {
            curr = curr->next;
        }
    }
    

   return head;
}

int main(int argc, char const *argv[])
{
    int size, i,val;
    scanf("%d", &size);
    ListNode **list1 = (struct ListNode **)malloc(sizeof(struct ListNode *) * size);

    for (i = 0; i < size; i++)
    {
        scanf("%d",&val);
        list1[i] = (ListNode *)malloc(sizeof(ListNode *));
        list1[i]->val = val;
        list1[i]->next = NULL;
        if (i > 0)
        {
            list1[i - 1]->next = list1[i];
        }
    }

    struct ListNode *head = deleteDuplicates(list1[0]);

    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }

    return 0;
}
