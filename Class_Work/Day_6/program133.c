#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int iCnt = 0;
    int *iptr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iLength);

    //Step 1: Allocate the memory
    iptr = (int *)malloc(iLength * sizeof(int));
    
    if(iptr == NULL)      
     {
        printf("Unable to allocate the memoey\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //Step 2 : Use the memory
    //Call to the function which contains bussiness logic
    //Fun(iPtr,iLength);

    //Free the memory
    free(iptr);

    return 0;
}