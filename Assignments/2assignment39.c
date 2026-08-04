#include <stdio.h>

struct node
{
    int data;
    struct node* next;

};

typedef struct node NODE;
typedef struct node* PNODE;

int FirstOccurence(PNODE head, int iNo)
{
    int iPos = 1;

    while(head != NULL)
    {
        if(head->data == iNo)
        {
            return iPos;
        }

        head = head->next;
        iPos++;
    }

    return -1;
}