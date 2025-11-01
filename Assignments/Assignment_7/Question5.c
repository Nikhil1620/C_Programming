#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = iNo; iCnt >= iNo && iCnt <= (iNo*5); iCnt = iCnt + iNo)
    {
        printf("%d\t", iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}