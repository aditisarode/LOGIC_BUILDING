#include <iostream>
using namespace std;

template <class T>
T Min(T *Arr, int iSize)
{
    int i = 0;
    T iMin = Arr[0];

    for(i = 1; i < iSize; i++)
    {
       if(Arr[i] < iMin)
       {
        iMin = Arr[i];
       }
    }

    return iMin;
}

int main()
{
    int Brr[] = {10, 20, 30, 40, 50};
    float Crr[] = {10.7f, 3.7f, 9.8f, 8.7f};

    int iRet = 0;
    float fRet = 0;

    iRet = Min(Brr, 5);

    cout<<iRet<<endl;

    fRet = Min(Crr, 4);

    cout<<fRet<<endl;

    return 0;
}