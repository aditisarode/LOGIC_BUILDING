// Objective-> to implement the odd even logic with the help of int function

#include<stdio.h>

int checkevenodd(int iNo)
{
   int iremainder = iNo % 2;
   return iremainder;

}
int main()
{
    int ivalue = 0;
    int iret = 0; 

    printf("Enter a number:\n");
    scanf("%d",&ivalue);

    iret = checkevenodd(ivalue);

    if(iret == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    return 0;
}