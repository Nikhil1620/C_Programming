/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    printf("Enter the first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter the second number : \n");
    scanf("%d",&ivalue2);

    if(ivalue1 % ivalue2 == 0)
    {
        printf("True\n");
    }
    else
    {
        printf("Flase\n");
    }
    

    return 0;

}
