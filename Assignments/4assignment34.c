#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0;
    UINT iAns = 0;

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
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th & 8th & 9th bits are ON\n");
    }
    else
    {
        printf("one or more of the 7th, 8th and 9th bits are OFF\n");
    }

    return 0;

}