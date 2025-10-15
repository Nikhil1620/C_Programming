//factors of number given by user
#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo, iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    
}
int main()
{
    int ivalue = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    DisplayFactors(ivalue);
    

    return 0;
}