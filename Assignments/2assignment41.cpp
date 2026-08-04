#include <iostream>
using namespace std;

template <class T>
int Frequency(T *Arr, int iSize, T iNo)
{
    int i = 0;
    int iCount = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = 0;

    iRet = Frequency(Brr, 9, 10);

    cout<<iRet<<endl;
    
    return 0;
}