#include <iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int X = 5)                   // Parameterized Constructor with Default argument               
        {
            iSize = X;                          
            Arr = new int[iSize];               
        }

        ~ArrayX()                               
        {
            delete []Arr;                        
        }

};

int main()
{                      
    ArrayX *aobj1 = new ArrayX();           // Parameterized 
    ArrayX *aobj2 = new ArrayX(15);          // Parameterized

    // Function Call
    
    delete aobj1;
    delete aobj2;
    
    return 0;

}