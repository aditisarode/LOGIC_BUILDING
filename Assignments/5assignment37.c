#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    int i;

    for(i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0;
    int iStart = 0, iEnd = 0;
    UINT iRet = 0;

    printf("Enter the number : ");
    scanf("%u", &iValue);

    printf("Enter starting position : ");
    scanf("%d", &iStart);

    printf("Enter ending position : ");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iValue, iStart, iEnd);

    printf("Updated number : %u\n", iRet);

    return 0;
}