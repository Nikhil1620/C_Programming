/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////n
//
//  Function Name : LessThanOrGreaterThan10
//  Description :   It is use to indicate the given number is less than or 
//                  greater than 10
//  Input :         Integer
//  Output :        String
//  Authur :        Nikhil Ramesh Ahire
//  Date :          22/10/2025
//
/////////////////////////////////////////////////////////////////////////////

void LessThanOrGreaterThan10(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo <= 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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

    LessThanOrGreaterThan10(iValue);

    return 0;
}