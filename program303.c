
#include <Stdio.h>

int main()
{
    int iNo = 0;
    int iDigit = 0;

    printf("Enter the number : \n");
    scanf("%d", &iNo);
    
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d",iDigit);
        iNo = iNo / 2;
    }

    printf("\n");
    
    return 0;
}
