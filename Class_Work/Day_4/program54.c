//count the number of factors of number given by user

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;    //Loop Counter
    int iFrequency = 0;  // factor counter

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    if(iFrequency == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
//Time Complexity = O(N/2)

int main()
{
    int ivalue = 0;
    
    int bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&ivalue);
    
    bRet = CheckPrime(ivalue);

    if(bRet == true)
    {
        printf("%d is prime number", ivalue);
    }
    else
    {
        printf("%d is not prime number", ivalue);
    }

    return 0;
}