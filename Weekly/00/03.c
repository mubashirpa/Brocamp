#include <stdio.h>

int main()
{
    int p;
    float r, n, si;

    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("Enter the interest rate: ");
    scanf("%f", &r);

    printf("Enter the number of years: ");
    scanf("%f", &n);

    si = (float)(p * r * n) / 100;

    printf("The simple interest of amount %d, with %.1f interest rate, for %.1f years is %.2f", p, r, n, si);
}