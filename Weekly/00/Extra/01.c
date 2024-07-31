#include <stdio.h>

void print(int count, char s[])
{
    if (count < 8)
    {
        printf("%s\n", s);
        count++;
        print(count, s);
    }
}

int main()
{
    char w[20];
    int count = 1;

    printf("Enter crossroads: ");
    scanf("%s", &w);

    print(count, w);
}