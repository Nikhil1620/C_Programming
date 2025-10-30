#include<stdio.h>
#include<stdbool.h>

bool CheckLeap(int iYEAR)
{
    if(iYEAR % 4 == 0)
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
    int iYear = 0;
    bool iResult = false;

    printf("Enter the year: ");
    scanf("%d", &iYear);

    iResult = CheckLeap(iYear);

    if(iResult == true)
    {
        printf("The year is leap year.");
    }
    else
    {
        printf("The year is not leap year");
    }

    return 0;
}