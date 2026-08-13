#include <stdio.h>

void Display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        int temp = i;
        i++;
        Display(iNo);
        printf("%d\t*\t", temp);
 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}