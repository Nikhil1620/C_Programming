#include<stdio.h>

char ChechPositiveNegativeZero(int iNo)
{
    if(iNo > 0)
    {
        return 'P';   
    }
    else if(iNo < 0)
    {
        return 'N';
    }
    else
    {
        return 'Z';
    }
}

int main()
{
    int iValue = 0;
    char iResult = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iResult = ChechPositiveNegativeZero(iValue);

    if(iResult == 'P')
    {
        printf("The number is positive.\n");
    }
    else if(iResult == 'N')
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is Zero.\n");
    }

    return 0;
}