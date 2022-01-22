#include <stdio.h>
#include "makenewnode.h"
void insertAtBeg()
{
    printf("INSERT AT BEG\n");
    struct Node *newNode = makeNewNode();
    newNode->next = h;
    h = newNode;
}

void insertAtEnd()
{
    if (h == NULL)
    {
        insertAtBeg();
        return;
    }
    printf("INSERT AT END\n");
    struct Node *p = h;
    while (p->next != NULL)
    {
        p = p->next;
    }
    struct Node *newNode = makeNewNode();
    newNode->next = NULL;
    p->next = newNode;
}

void insertAfterNode()
{
    printf("INSERT AFTER NODE\n");
    int idx;
    printf("Enter index - ");
    scanf("%d", &idx);
    struct Node *newNode = makeNewNode();
    struct Node *p = h;
    for (int i = 0; i < idx; i++)
    {
        if (p == NULL)
        {
            printf("Out of index\n");
            return;
        }
        p = p->next;
    }
    newNode->next = p->next;
    p->next = newNode;
}