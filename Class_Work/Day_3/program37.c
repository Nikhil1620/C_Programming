#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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