#include<stdio.h>

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