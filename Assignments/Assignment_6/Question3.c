#include<stdio.h>
#include<stdbool.h>

bool CheckEqualnum(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    bool iResult = false;

    printf("Enter the first number : \n");
    scanf("%d", &iValue1);

    printf("Enter the second number : \n");
    scanf("%d", &iValue2);

    iResult = CheckEqualnum(iValue1, iValue2);

    if(iResult == true)
    {
        printf("The numbers are equal.");
    }
    else
    {
        printf("The numbers are not equal.");
    }
    return 0;
}