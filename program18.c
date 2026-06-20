// Objective-> Amusement park ticket price calculation based on age with if else ladder loop 

#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
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

    printf("Your ticket price is %d\n",iret);

    return 0;
}