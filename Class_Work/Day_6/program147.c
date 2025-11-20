#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;   
    int iMin = Arr[0];       

    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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
    
    iResult = Minimum(iptr, iLength);

    printf("Minimum number is %d\n", iResult);

    //Free the memory
    free(iptr);

    return 0;
}