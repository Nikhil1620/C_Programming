//Iteration
#include<stdio.h>

int main()
{
    int iNo = 723614;
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


    return 0;
}

