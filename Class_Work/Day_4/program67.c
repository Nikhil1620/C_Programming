
#include<stdio.h>

void  DisplayDigit(int iNo)
{
    int iDigit = 0;

    printf("-----------------------------------------------------\n");
    printf("The Original number is : %d\n", iNo);

   
    while(iNo != 0)
    {
        printf("-----------------------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is : %d\n", iDigit);
        iNo = iNo / 10;
        printf("iNo is : %d\n", iNo);
    }

    printf("-----------------------------------------------------\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);


    return 0;
}

