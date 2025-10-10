#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Length = 0;
    int *Arr = NULL;
    
    printf("Enter the number of elements : \n");
    scanf("%d", &Length);

    //Step1 = Allocate the memory
    Arr = (int *)malloc(Length*sizeof(int));

    if(Arr == NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets successfully allocated\n");
    }

    //Step 2 = Use the memory
    //Step 3 = Free the emmory
    free(Arr);

    return 0;
}