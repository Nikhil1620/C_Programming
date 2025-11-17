#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iSize)
{
    int iCnt = 0;

    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)    
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
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

    iResult = Display(ptr,iLength);
    printf("The sum of the elements of the given array is : %d", iResult);

    free(ptr);

    return 0;
}