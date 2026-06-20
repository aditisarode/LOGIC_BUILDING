// Objective->to implement the` odd even logic here optimiaztion is done 
//1.(iremainder == 0) is more efficient than (iNo % 2 == 0) because it directly checks the remainder without performing a division operation, which can be more computationally expensive.
//2.if(iret == true) is removed because iret is already a boolean variable, we can directly use it in the condition without comparing it to true or false


#include<stdio.h>
#include<stdbool.h>

bool checkevenodd(int iNo)
{
   //int iremainder = iNo % 2; -> for the embedded code we can directly check the condition without storing the remainder in a variable
   //if(iremainder == 0) -> we can directly check the condition without storing the remainder in a variable12

   if(iNo % 2==0)
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
    //if(iret == true)//removed this because iret is already a boolean variable, we can directly use it in the condition without comparing it to true or false
    
    if(iret)
    {
        printf("%d is even Number\n",ivalue);
    }
    else
    {
        printf("%d is Odd Number\n",ivalue);
    }
    
    return 0;
}