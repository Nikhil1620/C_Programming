#include<stdio.h>

void CaseConverter(char Cchar)
{
    if((Cchar >= 'a') && (Cchar <= 'z'))
    {
        Cchar = Cchar - 32;
    }

    printf("The Capital letter is : %c\n",Cchar);

}


int main()
{
    char Cvalue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&Cvalue);

    CaseConverter(Cvalue);


    return 0;
}