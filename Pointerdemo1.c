#include <stdio.h>
int main()
{
    int iValue = 11;
    char cValue = 'M';

    int *iPtr = &iValue;   //AddressOf Operator
    int *cPtr = &cValue;   //AddressOf Operator

    printf("Size of iPtr : %d\n", sizeof(iPtr));
    printf("Size of cPtr : %d\n", sizeof(cPtr));

    return 0;

}
