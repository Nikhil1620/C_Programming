/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Divisibility
//  Description :   It is use to check the number is divisible by 5 or not
//  Input :         Integer
//  Output :        boolen
//  Authur :        Nikhil Ramesh Ahire
//  Date :          19/10/2025
//
/////////////////////////////////////////////////////////////////////////////

bool Divisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
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

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    int bRet = false;

    bRet = Divisibility(iValue);

    if(bRet == true)
    {
        printf("The given number is divisible by 5\n");
    }
    else
    {
        printf("The given number is not divisible by 5\n");
    }

    return 0;
}