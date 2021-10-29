/* Write a program that receives an arbitrary decimal and outputs it as an octal or hexadecimal. */

#include <stdio.h>

int main()
{
    int decimal;
    scanf("%d", &decimal);
    printf("input : %d, Octal : %o, Hexadecimal : %x\n", decimal, decimal, decimal);
}
