#include <stdio.h>
#include <malloc.h>

void deleteAtBeg()
{
    if (handleEmpty() == 1)
        return;
    printf("DELETE AT BEG\n");
    struct Node *p = h;
    h = h->next;
    free(p);
}

void deleteAtEnd()
{
    if (handleEmpty() == 1)
        return;
    printf("DELETE AT END\n");
    struct Node *prev = h;
    struct Node *p = h->next;

    //Only one node
    if (p == NULL)
    {
        deleteAtBeg();
        return;
    }
    while (p->next != NULL)
    {
        p = p->next;
        prev = prev->next;
    }
    prev->next = NULL;
    free(p);
}

void deleteAfterNode()
{
    if (handleEmpty() == 1)
        return;
    printf("DELETE AFTER NODE\n");
    int idx;
    printf("Enter index - ");
    scanf("%d", &idx);
    if (idx == 0)
    {
        deleteAtBeg();
        return;
    }

    struct Node *prev = h;
    struct Node *p = h->next;
    for (int i = 1; i < idx; i++)
    {
        if (p->next == NULL)
        {
            printf("Out of index\n");
            return;
        }
        p = p->next;
        prev = prev->next;
    }
    prev->next = p->next;
    free(p);
}