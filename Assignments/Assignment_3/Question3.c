/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////n
//
//  Function Name : DisplayEven
//  Description :   It is use to display even factors of that given number
//  Input :         Integer
//  Output :        Integer
//  Authur :        Nikhil Ramesh Ahire
//  Date :          24/10/2025
//
/////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
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

    DisplayEvenFactors(iValue);

    return 0;
}