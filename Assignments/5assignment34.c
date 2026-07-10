#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x80000001;
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
        printf("1st & 32nd bits are ON\n");
    }
    else
    {
        printf("Either the 1st bit or 32nd bit (or both) are OFF\n");
    }

    return 0;

}