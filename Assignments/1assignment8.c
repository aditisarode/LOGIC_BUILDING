#include <stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;

}
int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Radius:");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Result: %f", dRet);

    return 0;
}