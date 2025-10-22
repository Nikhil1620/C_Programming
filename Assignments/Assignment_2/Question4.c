/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////n
//
//  Function Name : Display 
//  Description :   It is use to Display the number in the given frequency
//  Input :         Integer
//  Output :        Integer
//  Authur :        Nikhil Ramesh Ahire
//  Date :          22/10/2025
//
/////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iTimesPrint)
{
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iTimesPrint < 0)
    {
        iTimesPrint = -iTimesPrint;
    }

    for(iCnt = 1; iCnt <= iTimesPrint; iCnt++)
    {
        printf("%d\t", iNo);
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
    int iFrequency = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    printf("Enter the frequency : \n");
    scanf("%d", &iFrequency);

    Display(iValue, iFrequency);

    return 0;
}