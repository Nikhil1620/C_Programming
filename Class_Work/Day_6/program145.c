#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];            //Important

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iLength = 0;
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

    //Step 2 : Use the memory
    
    iResult = Maximum(iptr, iLength);

    printf("Maximum number is %d\n", iResult);

    //Free the memory
    free(iptr);

    return 0;
}