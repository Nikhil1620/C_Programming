#include <stdio.h>
int main()
{
    int i = 10;
    short int j = 20;
    long int k = 30;

    printf("Size of integer is : %d\n", sizeof(i));   //4
    printf("Size of integer is : %d\n", sizeof(j));   //2
    printf("Size of integer is : %d\n", sizeof(k));   //8

    return 0;
}