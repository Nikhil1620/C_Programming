#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

//O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }  
    }

    return(iCnt != iSize);

}

int main()
{
    int iLength = 0;
    int iValue = 0;
    int iCnt = 0;
    IPTR iptr = NULL;
    bool bResult = false;

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
    scanf("%d",&iValue);

    //Step 2 : Use the memory
    
    bResult = LinearSearch(iptr, iLength, iValue);

    if(bResult == true)
    {
        printf("The number is present in the array.");
    }
    else
    {
        printf("The number is not present in the array.");
    }

    //Free the memory
    free(iptr);

    return 0;
}