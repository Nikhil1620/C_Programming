#include<stdio.h>

int CheckLargest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    int iResult = 0;

    printf("Enter the first number : \n");
    scanf("%d", &iValue1);

    printf("Enter the second number : \n");
    scanf("%d", &iValue2);

    printf("Enter the third number : \n");
    scanf("%d", &iValue3);

    iResult = CheckLargest(iValue1, iValue2, iValue3);

    printf("The largest number is: %d\n", iResult);

    return 0;
}