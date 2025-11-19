#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iLength = 0;
    int iValue = 0;
    int iCnt = 0;
    IPTR iptr = NULL;
    int iResult = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iLength);

    //Step 1: Allocate the memory
    iptr = (IPTR)malloc(iLength * sizeof(int));
    
    if(iptr == NULL)      
     {
        printf("Unable to allocate the memoey\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    printf("Enter the value whose frequency should be calculate : ");
    scanf("%d",%iValue);

    //Step 2 : Use the memory
    
    iResult = FequencyCalculate(iptr, iLength);

    printf("The frequency of number 11 in the given array is :%d",iResult);

    //Free the memory
    free(iptr);

    return 0;
}