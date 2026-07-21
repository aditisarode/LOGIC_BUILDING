#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int No)
        {
            Size = No;
            Arr = new int[No];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : \n";

            for(i = 0; i < Size; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Elements of array : \n";

            for(i = 0; i < Size; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }


};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();
    
    return 0;
}