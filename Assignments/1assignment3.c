#include <Stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        {
            printf("%d ", iCnt * 2);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    PrintEven(iValue);
    return 0;
}