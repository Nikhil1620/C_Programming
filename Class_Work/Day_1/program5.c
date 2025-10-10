#include<stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int iAns = 0;

    printf("Enter First number : \n");
    scanf("%d",&i);

    printf("Enter Second number : \n");
    scanf("%d",&j);

    iAns = i + j;           //Business Logic

    printf("The Addition is: %d\n",iAns);
    return 0;
}