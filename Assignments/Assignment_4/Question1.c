/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////n
//
//  Function Name : MultiFact
//  Description :   It is use to display the multiplication of the factors
//  Input :         Integer
//  Output :        Integer
//  Authur :        Nikhil Ramesh Ahire
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <=c iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }

    return iMulti;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter the number :\n ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("The multiplication of the factors is : %d\n", iRet);

    return 0;

}
