//count the number of factors of number given by user

#include<stdio.h>

int countnonfactors(int iNo)
{
    int iCnt = 0;    //Loop Counter
    int iFrequency = 0;  // factor counter

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&ivalue);
    
    iRet = countnonfactors(ivalue);

    printf("Number of nonfactors are : %d\n",iRet);

    return 0;
}