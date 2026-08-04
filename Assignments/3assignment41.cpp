#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *Arr, int iSize, T iNo)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return (i + 1);
        }
    }
    return -1;
}

int main()
{
    int Brr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = 0;

    iRet = SearchFirst(Brr, 9, 40);

    cout<<iRet<<endl;
    
    return 0;
}