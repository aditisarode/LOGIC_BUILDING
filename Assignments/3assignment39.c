#include <stdio.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

int LastOccurence(PNODE head, int iNo)
{
    int iPos = 1;
    int iLast = -1;

    while(head != NULL)
    {
        if(head->data == iNo)
        {
            iLast = iPos;
        }

        head = head->next;
        iPos++;
    }

    return iLast;
}