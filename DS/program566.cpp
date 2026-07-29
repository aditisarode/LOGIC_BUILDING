#include <iostream>
using namespace std;

class Searching
{
    private:
        int *Arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();
        void Accept();
        void Display();
};

Searching :: Searching(int iNo)        // Define Constructor 
{
    iSize = iNo;
    Arr = new int[iSize];
}

Searching :: ~Searching()             // Define Destructor 
{
    delete []Arr;
}

void Searching :: Accept()
{
    int i = 0;
    cout<<"Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}   

void Searching :: Display()
{
    int i = 0;
    cout<<"Elements of the array : \n";

    for(i = 0; i < iSize; i++)
    {
       cout<<Arr[i]<<"\n";
    }
}   

int main()
{
    Searching sobj(5);

    sobj.Accept();
    sobj.Display();
    
    return 0;
}