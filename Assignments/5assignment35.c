#include <stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000F;
   
    iNo = iNo | iMask;

    return iNo;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue);

    printf("Updated Number : %d",iRet);

    return 0;

}