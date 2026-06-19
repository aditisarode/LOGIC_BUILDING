#include <stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
       if (iCnt > 0)
       {
       if(iCnt % 2 ==  0)
       {
        iSum = iSum + iCnt;
       }
       }
    }
    return iSum;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point:");
    scanf("%d", &iValue1);

    
    printf("Enter ending point:");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1 , iValue2);

     printf("Addition is: %d\n", iRet);

    return 0;

}
