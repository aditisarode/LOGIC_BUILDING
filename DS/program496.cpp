#include <iostream>
using namespace std;

# pragma pack(1)

template <class T>
struct node 
{
    T data;
    struct node *next;

};

template <class T>
class SinglyCL
{
    private:
        struct node<T> *first;
        struct node<T> *last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        
};

template <class T>
SinglyCL<T> :: SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;

}

template <class T>
void SinglyCL<T> :: Display()
{
    struct node<T> *temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | ->";
        temp = temp->next;

    }while(last->next != temp);

    cout<<"\n";

}

template <class T>
int SinglyCL<T> :: Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;   
    }
    else
    {
        newn->next = first;
        first = newn;

    }

    last->next = first;
    iCount++;

}

template <class T>
void SinglyCL<T> :: InsertLast(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;   
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;

    iCount++;

}

template <class T>
void SinglyCL<T> :: InsertAtPos(T iNo, int iPos)
{
    int i = 0;

    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }

}

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;

        last->next = first;
    }

    iCount--;
}

template <class T>
void SinglyCL<T> :: DeleteLast()
{
    struct node<T> *temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }
        
        delete last;
        last = temp;

        last->next = first;
    }

    iCount--;
}

template <class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
    int i = 0;

    struct node<T> *temp = NULL;
    struct node<T> *target = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        delete target;

        iCount--;
    }

}

int main()
{
    SinglyCL <int> sobj;
    int iRet = 0;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements : "<<iRet<<"\n";

    sobj.DeleteFirst();
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements : "<<iRet<<"\n";

    sobj.DeleteLast();
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements : "<<iRet<<"\n";

    sobj.InsertAtPos(105, 4);
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements : "<<iRet<<"\n";

    sobj.DeleteAtPos(4);
    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements : "<<iRet<<"\n";

    return 0;
}