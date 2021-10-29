/* Write a program that receives one character as a scanf()
function and outputs the character and the ASCII code value (decimal). */

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    printf("input : %c\nASCII : %d", c, c);
}
