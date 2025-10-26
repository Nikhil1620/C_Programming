//factors of number given by user
/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    
}

// Time complexity = 
int main()
{
    int ivalue = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    DisplayFactors(ivalue);
    

    return 0;

}
