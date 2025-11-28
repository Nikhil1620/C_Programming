#include<stdio.h> 

int strlenX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iResult = 0;

    printf("Enter string : \n");
    scanf("%[^\n]",Arr);

    iResult = strlenX(Arr);
    printf("The length of the given string is %d\n",iResult);

    return 0;
}