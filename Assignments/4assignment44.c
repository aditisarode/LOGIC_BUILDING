#include <stdio.h>

int Fact(int iNo)
{
    static int i = 1;
    static int iFact = 1;

    if(i <= iNo)
    {
        iFact = iFact * i;
        i++;

        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("Factorial is : %d\n", iRet);

    return 0;
}
