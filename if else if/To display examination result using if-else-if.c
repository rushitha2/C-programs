   
//Rename To display examination result to To display examination result…
#include <stdio.h>

int main()
{
    int marks;
    printf("\n Enter marks obtained:");
    scanf("%d",&marks);
    if (marks>=75)
    printf("\n DISTINCTION");
    else if ((marks>=60) && (marks<75))
    printf("\n FIRST CLASS");
    else if ((marks>=50) && (marks<60))
    printf("\n SECOND CLASS");
    else if ((marks>=40) && (marks<50))
    printf("\n THIRD CLASS");
    else
    printf("\n FAIL");
    return 0;
}