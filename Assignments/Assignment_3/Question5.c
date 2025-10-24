#include<stdio.h>

void CheckVowel(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is a vowel\n");
            break;

        default:
            printf("It is not a vowel\n");
            break;
    }
}

int main()
{
    char Cvalue = '\0';

    printf("Enter a character : ");
    scanf("%c", &Cvalue);

    CheckVowel(Cvalue);

    return 0;
}
