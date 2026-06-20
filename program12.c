// Objective->to implement the odd even logic with the help of void function

#include<stdio.h>

void checkevenodd(int iNo)
{
    int iremainder = iNo % 2;

    if(iremainder == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

}
int main()
{
    int ivalue = 0;  

    printf("Enter a number:\n");
    scanf("%d",&ivalue);

    checkevenodd(ivalue);
    
    return 0;
}