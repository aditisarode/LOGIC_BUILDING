#include <stdio.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

int CountEven(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        if((head->data % 2) == 0)
        {
            iCount++;
        }

        head = head->next;
    }

    return iCount;
}