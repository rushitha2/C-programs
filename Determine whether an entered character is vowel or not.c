/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf("\n Enter any character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'a':
        printf("\n %c is VOWEL", ch);
        break;
        case 'E':
        case 'e':
        printf("\n %c is VOWEL", ch);
        break;
        case 'I':
        case 'i':
        printf("\n %c is VOWEL", ch);
        break;
        case 'O':
        case 'o':
        printf("\n %c is VOWEL", ch);
        break;
        case 'U':
        case 'u':
        printf("\n %c is VOWEL", ch);
        break;
        defalut:
        printf("\n %c is not a VOWEL", ch);
    }

    return 0;
}
