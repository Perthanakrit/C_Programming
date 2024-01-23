#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // allocate 3 nodes in the heap
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head = first;     // save the head
    first->data = 17; // assign data in first node to 17
    first->next = second;

    second->data = 29;
    second->next = third;

    third->data = 93;
    third->next = NULL;
    return 0;
}