#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0x1;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    printf("Enter the position:\n");
    scanf("%u",&iLocation);

    bRet = ChkBit(iValue, iLocation);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}