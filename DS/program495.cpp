#include <iostream>
using namespace std;

# pragma pack(1)

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct node<T> *first;
        int iCount;

    public:
        DoublyLL();                    
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
DoublyLL<T>:: DoublyLL()
    {
        this->first = NULL;
        this->iCount = 0;
        
    }

template <class T>
void DoublyLL<T> :: Display()
{
    struct node<T> *temp = NULL;

    temp = this->first;

    cout<<"\nNULL <=>";
    while(temp != NULL)
    {
        cout<<" | "<<temp -> data<<" | <=> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int DoublyLL<T> :: Count()
{
    return this->iCount;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = new struct node<T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }

    this->iCount++;

}

template <class T>
void DoublyLL<T> :: InsertLast(T iNo)
{
     struct node<T> *newn = new struct node<T>;
     struct node<T> *temp = NULL;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;
    
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }

    this->iCount++;

}

template <class T>
void DoublyLL<T> :: InsertAtPos(T iNo, int iPos)
{
    int i = 0;
    struct node<T> *temp = NULL;
    struct node<T> *newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        temp = this->first;

        newn = new struct node<T>;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;

        this->iCount++;

    }
}

template <class T>
void DoublyLL<T> :: DeleteFirst()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        this->first = this->first->next;
        delete this->first->prev;
        this->first->prev = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLL<T> :: DeleteLast()
{
    struct node<T> *temp = NULL;

    if(this->first == NULL)
    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first = NULL;
    }
    else
    {
        temp = this->first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    this->iCount--;
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(int iPos)
{
    int i = 0;
    struct node<T> *temp = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();
    }
    else if(iPos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
       
        this->iCount--;

    }
}

int main()
{
    int iRet = 0;
    DoublyLL <int> dobj;  

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.Display();

    iRet = dobj.Count();

    cout<<"NUmber of elements : "<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"NUmber of elements : "<<iRet<<endl;

    dobj.DeleteFirst();
    dobj.Display();

    iRet = dobj.Count();

    cout<<"NUmber of elements : "<<iRet<<endl;

    dobj.DeleteLast();
    dobj.Display();

    iRet = dobj.Count();

    cout<<"NUmber of elements : "<<iRet<<endl;

    dobj.InsertAtPos(105,4);
    dobj.Display();

    iRet = dobj.Count();

    cout<<"NUmber of elements : "<<iRet<<endl;

    dobj.DeleteAtPos(4);
    dobj.Display();

    iRet = dobj.Count();

    cout<<"NUmber of elements : "<<iRet<<endl;

    return 0;
}

