/*
    Algorithm

    START
        Accept the first number as No1
        Accept the second number as No2
        if the input is negative then convert it into positive
        Perform Addition of Two Numbers
        Display the addition on the screen
    STOP
*/

/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers  
//  Description :   It is use to perform addition
//  Input :         Float,Float
//  Output :        Float
//  Authur :        Nikhil Ramesh Ahire
//  Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                 //First Input
                            float fNo2                  //Second Input
                        )
{
    float fsum = 0.0f;                                  //To Store the Result

    if(fNo1 < 0.0f)                                       //updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                       //updator
    {
        fNo2 = -fNo2;
    }

    fsum = fNo1 + fNo2;                                 //Business Logic

    return fsum;
}   //End of AdditionTwoNumbers

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;               //To accept user input
    float fRet = 0.0f;                                  //To Store the result

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);         //Method Call

    printf("The Addition is: %f\n",fRet);
    
    return 0;
}   //End of main

/////////////////////////////////////////////////////////////////////////////
//  
//  Testcases Successfully handled by the application
//  
//  Input1 = 10.5       Input2 = 3.2      Output = 13.7      
//  Input1 = 10.5       Input2 = -3.2     Output = 13.7
//  Input1 = -10.5      Input2 = 3.2     Output = 13.7
//  Input1 = -10.5      Input2 = -3.2    Output = 13.7
//  Input1 = 10.5       Input2 = 0        Output = 10.5
//
/////////////////////////////////////////////////////////////////////////////