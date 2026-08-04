#include <iostream>
using namespace std;

template <class T>
void Reverse(T *Arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;

    T Temp;

    while(iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
    
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
   
    Reverse(Brr, 9);

    int i = 0;

    for(i = 0; i < 9; i++)
    {
        cout << Brr[i] << " ";
    }

    return 0;
}