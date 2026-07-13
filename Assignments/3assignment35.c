#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
   
    iNo = iNo ^ iMask;

    return iNo;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number : %d",iRet);

    return 0;

}