#include<stdio.h>
#include<stdbool.h>

bool CheckBigShort100(int iNo)
{
    if(iNo > 100)
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
    int iValue = 0;
    bool iResult = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iResult = CheckBigShort100(iValue);

    if(iResult == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}