#include <stdio.h>

int main()
{
    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
    {
        printf("The mark should be between 0 and 100");
        return 0;
    }

    if (mark >= 50)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
}