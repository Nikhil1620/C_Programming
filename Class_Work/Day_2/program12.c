/*
    Algorithm

    Start 
        Accept number and store as no
        Divide no by 2
        if the remainder is Zero 
            then Display as Even 
        otherwise
            Display as Odd
*/      

/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return 0;
}