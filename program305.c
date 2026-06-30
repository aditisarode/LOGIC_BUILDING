
#include <Stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter the first number :\n");
    scanf("%d",&No1);

    printf("Enter the second number :\n");
    scanf("%d",&No2);

    Ans = No1 & No2;
    printf("AND is : %d\n",Ans);

    Ans = No1 | No2;
    printf("OR is : %d\n",Ans);

    Ans = No1 ^ No2;
    printf("XOR is : %d\n",Ans);

    return 0;
}
