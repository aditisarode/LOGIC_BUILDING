#include <stdio.h>

int DollarToINR(int iNo)
{
   int iCnt = 0;
   int iINR = 0;

   for(iCnt = 1;iCnt <= iNo; iCnt++)
   {
     iINR = iINR + 70;
   }
   return iINR;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD ");
    scanf("%d", &iValue);

   iRet = DollarToINR(iValue);

   printf("Value in INR : %d", iRet);

    return 0;
}