/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////n
//
//  Function Name : DisplayEven
//  Description :   It is use to display number of even number in the given limit
//  Input :         Integer
//  Output :        Integer
//  Authur :        Nikhil Ramesh Ahire
//  Date :          23/10/2025
//
/////////////////////////////////////////////////////////////////////////////

void DisplayEven(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo*2); iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
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

    DisplayEven(iValue);

    return 0;
}