#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x900;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

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