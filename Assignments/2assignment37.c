#include <stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iPos = 1;

    while(iNo1 != 0 || iNo2 != 0)
    {
        if((iNo1 & 1) && (iNo2 & 1))
        {
            printf("%u ", iPos);
        }

        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iPos++;
    }
}
int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
   
    printf("Enter the first number : \n");
    scanf("%u",&iValue1);

    printf("Enter the second number : \n");
    scanf("%u",&iValue2);

    printf("Common ON bit positions : \n");
    CommonBits(iValue1, iValue2);

    return 0;

}