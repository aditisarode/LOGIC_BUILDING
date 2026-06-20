// Objective-> Amusement park ticket price calculation based on age with USER DEFINED MACRO to represent invalid age input and return statements for input validation

#include<stdio.h>

#define AGE_INVALID -1         //User defined macro to represent invalid age input

int CalculateTicketPrice(int iAge)
{
    //input fliter
    if(iAge<0){
        return AGE_INVALID;
    }
    
    if(iAge>=0 && iAge < 5)
    {
        return 0;
    }
    else if(iAge >= 6 && iAge < 18)
    {
        return 500;
    }
    else if(iAge >= 19 && iAge < 50)
    {
        return 900;
    }
    else
    {
        return 400;
    }
}
int main()
{
    int ivalue = 0;
    int iret=0;

    printf("Please enter your age to calculate ticket price :");
    scanf("%d",&ivalue);

    iret=CalculateTicketPrice(ivalue);

    if(iret==AGE_INVALID)
    {
        printf("Invalid input enter positive age \n");
    }
    else
    {
        printf("Your ticket price is %d\n",iret);
    }
    
    return 0;
}