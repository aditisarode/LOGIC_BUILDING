#include <stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x00000040;

    iMask = ~iMask;
   
    iNo = iNo & iMask;

    return iNo;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Updated Number : %d",iRet);

    return 0;

}