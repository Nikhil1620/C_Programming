#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;

    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)    
    {
        iSum = iSum + Arr[iCnt];
    }

    return (iSum / iSize);   //Issue
}

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *ptr = NULL;
    float fResult = 0;

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

    fResult = Average(ptr,iLength);
    printf("The Average of the given array are : %f", fResult);

    free(ptr);

    return 0;
}