#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float iAns = 0.0f;
    iAns = ((float)iNo2/iNo1) * 100;   //need to rember
    return iAns;
}

int main()
{
    int iTotal = 0;
    int iMarks = 0;
    float fPercentage = 0.0f;

    printf("Enter the total marks : \n");
    scanf("%d", &iTotal);

    printf("Enter the obtained marks : \n");
    scanf("%d", &iMarks);

    fPercentage = Percentage(iTotal, iMarks);

    printf("The percentage is : %f\n", fPercentage);

    return 0;
}