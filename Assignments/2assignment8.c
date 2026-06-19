#include <stdio.h>

double RectArea(float fWidth, float fLength)
{
    double dArea = 0;

    dArea = fWidth * fLength;

    return dArea;
}
int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    double dRet = 0;

    printf("Enter Width:");
    scanf("%f", &fValue1);
    
    printf("Enter Length:");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Result: %f", dRet);

    return 0;
}
