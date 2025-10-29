/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;    //Loop Counter
    int iFrequency1 = 0;  // factor counter
    int iFrequency2 = 0;  // nonfactor counter

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency1++;
        }
        else
        {
            iFrequency2++;
        }
    }

    printf("Number of factors are : %d\n",iFrequency1);
    printf("Number of Nonfactors are : %d\n",iFrequency2);
    

}
//Time Complexity = O(N)

////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&ivalue);
    
    CountFactorsNonFactors(ivalue);

    return 0;

}
