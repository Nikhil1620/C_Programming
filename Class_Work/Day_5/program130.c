#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0;

    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)    
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iCount = iCount + 1;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iResult = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    
    if(ptr == NULL)      
     {
        printf("Unable to allocate the memoey\n");
        return -1;
    }

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iResult = CountOdd(ptr,iLength);
    printf("The Odd elements of the given array are : %d", iResult);

    free(ptr);

    return 0;
}