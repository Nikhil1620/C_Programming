// 2  4  6  8  10

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= iNo; iCnt++) //can br written as
    {
        if(iCnt % 2 == 0) 
        {
            printf("%d\t",iCnt);  
        }
    }

    printf("\n");
}

// Time Complexity : O(N)

int main()
{
    int ivalue = 0;

    printf("Please enter number : \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}