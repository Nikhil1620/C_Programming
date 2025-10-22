/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////n
//
//  Function Name : CheckOddEven
//  Description :   It is use to check the given number is prime or even
//  Input :         Integer
//  Output :        String
//  Authur :        Nikhil Ramesh Ahire
//  Date :          22/10/2025
//
/////////////////////////////////////////////////////////////////////////////

bool CheckOddEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
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
    int bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckOddEven(iValue);

    if(bRet == false)
    {
        printf("The number is Odd");
    }
    else
    {
        printf("The number is Even");
    }

    return 0;
}