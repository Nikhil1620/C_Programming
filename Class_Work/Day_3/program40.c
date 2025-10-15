// 2  4  6  8  10

#include<stdio.h>

void Display(int iNo)
{   
    int iCnt = 2;

    for(iCnt = 2 ; iCnt <= iNo; iCnt = iCnt+2)
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