
#include<Stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 ==0)
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
    bool iRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = CheckEvenOdd(iValue);

    if(iRet == true)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is Odd.");
    }

    return 0;
}
