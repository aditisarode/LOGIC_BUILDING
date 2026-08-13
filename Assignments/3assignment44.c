#include <stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        Strlen(str + 1);
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("Length is : %d\n", iRet);

    return 0;
}
