#include <stdio.h>

int main()
{
    int num1;
    float num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %.2f is %.2f", num1, num2, sum);
}