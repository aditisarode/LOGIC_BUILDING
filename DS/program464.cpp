#include <iostream>
using namespace std;

#pragma pack(1)
struct node 
{
    int data;
    struct node* next;
};

class Stack
{
    private:
        struct node* first;
        int iCount;
    
    public:
        Stack();
        void Push(int iNo);                          
        int Pop();                                   
        int Peep();                                  
        void Display();
        int Count();

};

Stack :: Stack()
{
    first = NULL;
    iCount = 0;
}

void Stack ::  Push(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node();

    newn->data = iNo;
    newn->next = NULL;

    newn->next = first;                                // without if-else
    first = newn;

    iCount++;
}

int Stack :: Pop()  
{
    return 0;
}

int Stack :: Peep()    
{
    return 0;
}

void Stack :: Display()
{}

int Stack :: Count()
{
    return iCount;
}

int main()
{
    Stack sobj;

    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    iRet = sobj.Count();

    cout<<"Number of elements : "<<iRet<<"\n";

    return 0;
}