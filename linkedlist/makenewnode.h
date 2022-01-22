#include <malloc.h>
#include <stdio.h>
struct Node *makeNewNode()
{
    struct Node *newNode = malloc(sizeof(struct Node));
    printf("Enter value - ");
    scanf("%d", &newNode->value);
    return newNode;
}