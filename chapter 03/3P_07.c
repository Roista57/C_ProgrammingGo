// Write a program that receives letters, converts them into uppercase letters, and outputs them.
// If it's not a lowercase letter, just print it out.

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z'){
        c -= 32;
    }
    printf("%c\n", c);
}
