/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = 's';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 98.34567;

    printf("Size of character is : %lu\n", sizeof(cValue));
    printf("Size of integer is : %lu\n", sizeof(iValue));
    printf("Size of float is : %lu\n", sizeof(fValue));
    printf("Size of double is : %lu\n", sizeof(dValue));

    printf("Address of character is : %lu\n", &(cValue));
    printf("Address of integer is : %lu\n", &(iValue));
    printf("Address of float is : %lu\n", &(fValue));
    printf("Address of double is : %lu\n", &(dValue));


    return 0;

}
