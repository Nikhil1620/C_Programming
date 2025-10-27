#include<stdio.h>

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