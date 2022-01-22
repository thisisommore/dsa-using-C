#include <stdio.h>
#include <math.h>
#include <malloc.h>

struct Node
{
    int value;
    struct Node *next;
} *h = NULL;

void push()
{
    struct Node *newNode = malloc(sizeof(struct Node));
    printf("Enter value - ");
    scanf("%d", &newNode->value);
    newNode->next = h;
    h = newNode;
}

int pop()
{
    struct Node *p = h;
    h = h->next;
    int val = p->value;
    free(p);
    return val;
}