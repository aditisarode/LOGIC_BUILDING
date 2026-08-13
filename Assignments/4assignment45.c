#include <stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    if(iNo == 0)
    {
        return 9;
    }

    iDigit = iNo % 10;
    iMin = Min(iNo / 10);

    if(iDigit < iMin)
    {
        return iDigit;
    }
    else
    {
        return iMin;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Min(iValue);

    printf("Minimum Digit : %d\n", iRet);

    return 0;
}