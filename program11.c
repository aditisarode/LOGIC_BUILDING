/*Algo 
    //Method 1
    Start
     accept number as No
     if No is completely divisible by 2(No % 2 == 0)
        then display "Even Number"
     else
        display "Odd Number"
    STOP

    //Method 2
    Start
     accept number as no 
     divide no by 2(No / 2) and check the remainder
     if remainder is 0
        then display "Even Number"
     else
        display "Odd Number"

    STOP

1(no % 2 == 0) is more efficient than (no / 2) because it directly checks the remainder without performing a division operation, which can be more computationally expensive.
(no/2) -> example1: 10/2 = 5 (division operation)
(no%2) -> example1: 10%2 = 0 (modulus operation
*/

#include<stdio.h>

int main()
{
    int ivalue = 0;  
    int iremainder = 0;  

    printf("Enter a number:\n");
    scanf("%d",&ivalue);

    iremainder = ivalue % 2;
    
    if(iremainder == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    return 0;
}