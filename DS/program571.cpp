#include <iostream>
using namespace std;

template <class T>
class Searching
{
    private:
        T *Arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();

        void Accept();
        void Display();

        bool LinearSearch(T iNo);
        bool BiDirectionalSearch(T iNo);
};

template <class T>
Searching<T> :: Searching(int iNo)       
{
    iSize = iNo;
    Arr = new T[iSize];
}

template <class T>
Searching<T> :: ~Searching()             
{
    delete []Arr;
}

template <class T>
void Searching<T> :: Accept()
{
    int i = 0;
    cout<<"Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}   

template <class T>
void Searching<T> :: Display()
{
    int i = 0;
    cout<<"Elements of the array : \n";

    for(i = 0; i < iSize; i++)
    {
       cout<<Arr[i]<<"\n";
    }
}   

template <class T>
bool Searching<T> ::LinearSearch(T iNo)
{
    bool bFlag = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

template <class T>
bool Searching<T> :: BiDirectionalSearch(T iNo)
{
    int iStart = 0, iEnd = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)          
    {
        if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

        iStart++;
        iEnd--;
    }

    return bFlag;

}

int main()
{
    Searching<int> sobj(5);

    sobj.Accept();
    sobj.Display();
   
    if(sobj.LinearSearch(30) == true)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";
    }

    if(sobj.BiDirectionalSearch(30) == true)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";
    }
    
    return 0;
}