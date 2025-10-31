#include<stdio.h>

int NumMulti(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 == 0)
    {
        return iNo1 = 1;
    }
    if(iNo2 == 0)
    {
        return iNo2 = 1;
    }
    if(iNo3 == 0)
    {
        return iNo3 = 1;
    }
    
    int iMulti = iNo1 * iNo2 * iNo3;
    return iMulti;
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

    iResult = NumMulti(iValue1,iValue2,iValue3);

    printf("The multiplication is :%d\n", iResult);

    return 0;
}