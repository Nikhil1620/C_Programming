/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

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
            break;                          //Optimization
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

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

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


///Time Complexity for Prime = N/2

/// for non Prime is  = either 1 or 2
