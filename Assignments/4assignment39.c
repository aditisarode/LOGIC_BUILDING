#include <stdio.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

int CountGreater(PNODE head, int X)
{
    int iCount = 0;

    while(head != NULL)
    {
        if(head->data > X)
        {
            iCount++;
        }

        head = head->next;
    }

    return iCount;
}