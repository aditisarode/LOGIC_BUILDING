// Objective->to implement the` odd even logic with the help of bool function

#include<stdio.h>
#include<stdbool.h>

bool checkevenodd(int iNo)
{
   int iremainder = iNo % 2;

   if(iremainder == 0)
   {
       return true;
   }
   else
   {
       return false;
   }

}
int main()
{
    int ivalue = 0;
    bool iret = false;

    printf("Enter a number to check whether it is even or odd :\n");
    scanf("%d",&ivalue);

    iret = checkevenodd(ivalue);
    
    if(iret == true)
    {
        printf("%d is even Number\n",ivalue);
    }
    else
    {
        printf("%d is Odd Number\n",ivalue);
    }
    return 0;
}