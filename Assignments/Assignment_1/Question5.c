/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display 
//  Description :   It is use to display the number of stars according to the 
//                  number given by the user       
//  Input :         Integer
//  Output :        Symbol(*)
//  Authur :        Nikhil Ramesh Ahire
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}