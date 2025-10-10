#include<stdio.h>

int Add(int a,int b)
{
    int sum = 0;
    sum = a + b;            //Business Logic
    return sum;
}

int main()
{
    int i = 0;
    int j = 0;
    int iAns = 0;

    printf("Enter First number : \n");
    scanf("%d",&i);

    printf("Enter Second number : \n");
    scanf("%d",&j);

    iAns = Add(i,j);
    printf("The Addition is: %d\n",iAns);
    return 0;
}