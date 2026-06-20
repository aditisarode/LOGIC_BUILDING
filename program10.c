///////////////////////////////////////////////////////////
//
// Include required header files
//
///////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////
//
// Function name :  AddTwoNumbers 
// Input :          float, float
// Output :         float
// Description :    Performs addition of two floats
// Date :           08/05/2026
// Author :         Aditi Dilip Sarode
//
///////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1,                   // First Input
                        float fNo2                    // second Input
                    )
{
    float fAns = 0.0f;                                // Variable to store result

    fAns = fNo1 + fNo2;                               // Perform addition

    return fAns;
}

///////////////////////////////////////////////////////////
//
// Application to perform addition of two float values
//
//
///////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;                               // To store first input
    float fValue2 = 0.0f;                               // To store second input 
    float fResult = 0.0f;                               // To store the result
 

    printf("Enter the first number:\n");
    scanf("%f",&fValue1);

    printf("Enter the second number:\n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2);         

    printf("Addition is : %f\n",fResult);

    return 0;
}

///////////////////////////////////////////////////////////
//
// Input :  10.0  11.0
// Output : 21.0
//
///////////////////////////////////////////////////////////