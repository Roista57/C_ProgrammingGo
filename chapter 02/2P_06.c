// Enter the two natural numbers a and b, and write a program that outputs the quotient and remainder when a is divided by b.

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Quotient: %d, Remainder: %d\n", a/b, a%b);
}
