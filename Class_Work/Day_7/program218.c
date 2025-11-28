#include<stdio.h> 

int countletter(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCount++;
        }
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

    iResult = countletter(Arr);
    printf("The number of 'a' in given string is %d\n",iResult);

    return 0;
}