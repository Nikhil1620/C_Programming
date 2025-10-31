#include<stdio.h>

int main()
{
    char Name[40];

    printf("Please enter full name : \n");
    scanf(" %[^\n]", Name);   // need to remember

    printf("Your Name is %s\n", Name);

    return 0;
}