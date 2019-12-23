#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *ptr;
struct node *head;
struct node *tail;

void addNode(int dataPtr)
{
    ptr = (struct node *)malloc(sizeof(struct node *));
    
    // Set the nodes data
    ptr->data = dataPtr;
    
    tail->next = ptr;
    
    // Ptr is now tails
    tail = ptr;
}

int main()
{
    
    head = (struct node *)malloc(sizeof(struct node *));
    
    // Make sure that the head is the tail.
    tail = head;
    
    head->data = 0;
    
    addNode(2);
    addNode(3);
    
    printf("%d", head->next->next->data);
    
    return 0;
}
