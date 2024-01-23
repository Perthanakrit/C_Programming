# Linked List

### 1. What is Linked List?

โครงสร้างข้อมูลที่เก็บข้อมูลแบบเชื่อมต่อกัน โดยมีโหนดหนึ่งเป็นจุดเริ่มต้น และโหนดหนึ่งเป็นจุดสิ้นสุด โดยโหนดแต่ละตัวจะมีข้อมูลและตำแหน่งของโหนดถัดไป

### Example linked list in Data

![Linked List](./ex_link_list.png)

```C
struct node {
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

    head = first; // save the head
    first.data = 17; // assign data in first node
    first.next = second;

    second->data = 29;
    second->next = third;


    thrird->data = 93;
    third->next = NULL;
}
```

> access data in pointer struct use `->` instead of `.`

### Create a Linked List

_ไอเดียการขัดลำดับ data in linked list จะเป็นลักษณะ queue_

```C

```

### Accessing elements in Linked List (Traversal)

```C

```
