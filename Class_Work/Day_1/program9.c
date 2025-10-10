/*
Step 1 = Understand the problem statement
Step 2 = write the alogorithm
Step 3 = Decide the programming language
Step 4 = Write the program
Step 5 = Test the program
*/
/*
Algorithm

Start
    Accept the first number as No1
    Accept the second number as No2
    if the input is negative then convert it into positive
    Perform Addition of Two Numbers
    Display the addition on the screen
Stop
*/
#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fsum = 0.0f;

    if(fNo1<0.0f)      //updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2<0.0f)      //updator
    {
        fNo2 = -fNo2;
    }

    fsum = fNo1 + fNo2;            //Business Logic
    return fsum;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    float fAns = 0.0f; 

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fAns = AdditionTwoNumbers(fValue1,fValue2);
    printf("The Addition is: %f\n",fAns);
    return 0;
}