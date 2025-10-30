#include<stdio.h>

int ShowMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return(iNo1);
    }
    else
    {
        return(iNo2);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iResult = 0;

    printf("Enter the first number: ");
    scanf("%d", &iValue1);

    printf("Enter the second number: ");
    scanf("%d", &iValue2);

    iResult = ShowMax(iValue1,iValue2);

    if(iResult == iValue1)
    {
        printf("The maximum number is : %d\n", iValue1);
    }
    else
    {
        printf("The maximum number is : %d\n", iValue2);
    }

    return 0;
}