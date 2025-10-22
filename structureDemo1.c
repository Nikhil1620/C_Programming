/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
struct Demo
{
    int i;
    float f;
    int j;
};
int main()
{   
    struct Demo obj;

    printf("Size of Demo is : %d\n", sizeof(struct Demo));   //12
    printf("Size of Object is : %d\n", sizeof(obj));         //12


    return 0;

}
