//count the number of factors of number given by user

#include<stdio.h>

int countfactors(int iNo)
{
    int iCnt = 0;    //Loop Counter
    int iFrequency = 0;  // factor counter

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
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
    
    iRet = countfactors(ivalue);

    printf("Number of factors are : %d\n",iRet);

    return 0;
}