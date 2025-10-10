#include <stdio.h>
int main()
{
    int Arr[4]={10,20,30,40};
    int Brr[]={10,20,30,40,50};
    int Crr[6]={10,20,30};

    printf("Size of Arr is : %d\n",sizeof(Arr));    //16
    printf("Size of Brr is : %d\n",sizeof(Brr));    //20
    printf("Size of Crr is : %d\n",sizeof(Crr));    //24

    

    return 0;
}