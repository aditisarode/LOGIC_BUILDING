#include <iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)                           // Parameterized Constructor
        {
            cout<<"Inside Constructor\n";
            iSize = X;                          // Characteristics initialisation
            Arr = new int[iSize];               // Resource Allocation
        }

        ~ArrayX()                                // Destructor
        {
            cout<<"Inside Destructor\n";

            delete []Arr;                        // Resource Deallocation
        }

};

int main()
{
    // Static Memory aalocation for object
    // ArrayX aobj1(5);                               

    ArrayX *aobj1 = new ArrayX(5);
    
    delete aobj1;

    cout<<"End of main\n";
    
    return 0;

}