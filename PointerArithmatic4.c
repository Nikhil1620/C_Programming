#include <stdio.h>
int main()
{
    int Arr[] = {11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    // p + q;    // Invalid Operand Error Not Allowed
    q = q-p;    // Allowed
    
    printf("result of Subtraction is : %ld\n", q-p);

    q = q-2;
    printf("Data Ponited by q  is : %ld\n", q-2);



    return 0;
}