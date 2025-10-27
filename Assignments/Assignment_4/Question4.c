#include<stdio.h>

int SumFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = SumFact(iValue);

    printf("The Summation of the non-factors is : %d\n", iRet);

    return 0;
}