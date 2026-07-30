#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;
   
    iNo = iNo ^ iMask;

    return iNo;

}
int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number : %u\n", iRet);
   
    return 0;
}