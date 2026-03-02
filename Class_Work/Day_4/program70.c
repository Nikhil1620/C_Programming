
#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigits = 0;
    int iSum = 0;

    if(iNo = -iNo)
    {
        iNo = -iNo;
    }

    while(iNo != 0)   
    {
        iDigits = iNo % 10;
        iSum = iSum + iDigits;
        iNo = iNo / 10;
    }

    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);
    printf("Sum of digits : %d\n", iRet);


    return 0;
}
