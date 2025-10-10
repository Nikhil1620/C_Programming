#include <stdio.h>
struct Demo
{
    int i;
    char ch;
    float f;
    int j;
};

int main()
{   
    printf("Size of structure is : %d\n", sizeof(struct Demo));

    return 0;
}