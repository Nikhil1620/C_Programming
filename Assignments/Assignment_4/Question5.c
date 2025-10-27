/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorNonFactorDiff
//  Description :   It is use to display difference of factors and non factors
//  Input :         Integer
//  Output :        Integer
//  Authur :        Nikhil Ramesh Ahire
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int FactorNonFactorDiff(int iNo)
{
    int iCnt = 0;
    int iSumFactors = 0;
    int iSumNonFactors = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFactors = iSumFactors + iCnt;
        }
        else
        {
            iSumNonFactors = iSumNonFactors + iCnt;
        }
    }

    return iSumFactors - iSumNonFactors;
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

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = FactorNonFactorDiff(iValue);

    printf("The Difference is : %d\n", iRet);

    return 0;

}
