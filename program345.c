#include <stdio.h>

typedef unsigned int UINT;

// Position : 12th & 23th
int main()                  
{
    UINT iMask = 0x00400800;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter the number :\n");
    scanf("%d",&iNo);
    
    iResult = iNo ^ iMask;

    printf("Updated number : %d\n",iResult);
        
    return 0;
}
