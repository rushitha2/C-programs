//find greatest of the three numbers using if-else-if 

#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("\n Enter the first number:");
    scanf("%d",&num1);
    printf("\n Enter the second number:");
    scanf("%d",&num2);
    printf("\n Enter the third number:");
    scanf("%d",&num3);
    if (num1>num2)
    {
        if(num1>num3)
        printf("\n %d is greater than %d and %d",num1,num2,num3);
        else 
        printf("\n %d is greater than %d and %d",num3,num2,num1); 
    }
    else if (num2>num3)
    printf("\n %d is greater than %d and %d",num2,num1,num3);
    else
    printf("\n %d is greater than %d and %d",num3,num2,num1);

    return 0;
}