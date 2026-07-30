#include <stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    UINT iCount = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount ++;
        }

        iNo = iNo >> 1;
    }

    return iCount;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%u",&iValue);
    
    iRet = CountOne(iValue);

    printf("Number of ON bits : %u",iRet);

    return 0;

}