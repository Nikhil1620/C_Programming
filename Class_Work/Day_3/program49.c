//non factors of number given by user
#include<stdio.h>

void DisplaynonFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
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

    DisplaynonFactors(ivalue);
    

    return 0;
}