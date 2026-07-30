#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;

    iMask = iMask << (iPos - 1);

    iNo = iNo | iMask;

    return iNo;

}
int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);
    printf("Enter the position : \n");
    scanf("%u",&iLocation);

    iRet = OnBit(iValue, iLocation);

    printf("Updated Number : %u",iRet);

    return 0;

}