
#include <Stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;             // 3rd bit
    int iAns = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);
    
    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd bit is ON\n");
    }
    else
    {
        printf("3rd bit is OFF");
    }
    return 0;
}
