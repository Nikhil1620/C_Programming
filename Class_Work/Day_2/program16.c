/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output
#include<stdbool.h>                         //For Bool Datatype

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd  
//  Description :   It is use check the even or Odd Number
//  Input :         integer
//  Output :        Boolean
//  Authur :        Nikhil Ramesh Ahire
//  Date :          10/10/2025
//
/////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;
    if(iRem == 0)
    { return true; }
    else
    { return false;}
}   //End of CheckEvenOdd function

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is Even Number\n",iValue);}
    else
    { printf("%d is Odd Number\n",iValue);}
    
    return 0;
}   //End of the main function

/////////////////////////////////////////////////////////////////////////////
//  
//  Testcases Successfully handled by the application
//  
//  Input1 = 10             Output = 13.7      
//  Input1 = 10.5       2     Output = 13.7
//  Input1 = -10.5      Input2 = 3.2     Output = 13.7
//  Input1 = -10.5      Input2 = -3.2    Output = 13.7
//  Input1 = 10.5       Input2 = 0        Output = 10.5
//
/////////////////////////////////////////////////////////////////////////////