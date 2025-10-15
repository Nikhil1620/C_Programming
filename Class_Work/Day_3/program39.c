#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t",iCnt);  
    }

    printf("\n");
}

int main()
{
    int ivalue = 0;

    printf("Please enter number : \n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}