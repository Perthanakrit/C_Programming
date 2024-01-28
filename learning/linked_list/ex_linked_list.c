#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *create_stack_list(int input[], int size)
{
    struct node *head, *temp;
    int i;

    head = NULL;

    for (i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = input[i];
        temp->next = head;
        head = temp;
    }

    return head;
};

struct node *create_list(int input[], int size)
{
    struct node *head, *tail, *temp;
    int i;

    head = tail = NULL;

    for (i = 0; i < size; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = input[i];
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            tail->next = temp;
        }
        tail = temp;
    }

    return head;
};

struct node *create_list_with_head_tail(int input[], int size)
{
    struct node *head, *tail, *new_node;
    // int i;

    head = tail = NULL;

    for (; *input != -1; input++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = *input;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            tail->next = new_node;
        }
        tail = new_node;
    }

    return head;
};

void delete_node(struct node **head_ref, int item)
{
    struct node *temp, *prev;

    temp = *head_ref;
    prev = NULL;

    while (temp != NULL && temp->data != item)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Item not found\n");
        return;
    }

    if (prev == NULL)
    {
        *head_ref = temp->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);
}

int main()
{
    int input[] = {1, 2, 3, 4, 5, -1};

    struct node *head, *tmp;
    head = create_list_with_head_tail(input, 6);

    printf("%d\n", head->next->next->next->data);
    // while (head != NULL)
    // {
    //     printf("%d ", head->data);
    //     head = head->next;
    // }

    return 0;
}