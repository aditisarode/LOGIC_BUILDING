// Objective->to implement the odd even logic with the help of int function making the printouts more descriptive by including the input number in the output message

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

    printf("Enter a number to check whether it is even or odd :\n");
    scanf("%d",&ivalue);

    iret = checkevenodd(ivalue);

    if(iret == 0)
    {
        printf("%d is even Number\n",ivalue);
    }
    else
    {
        printf("%d is Odd Number\n",ivalue);
    }

    return 0;
}